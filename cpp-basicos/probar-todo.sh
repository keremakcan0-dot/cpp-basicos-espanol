#!/usr/bin/env bash
set -u

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TMP_DIR="$(mktemp -d)"
trap 'rm -rf "$TMP_DIR"' EXIT

compiled=0
tested=0
failed=0
index=0

while IFS= read -r -d '' source; do
    index=$((index + 1))
    relative="${source#"$ROOT"/}"
    executable="$TMP_DIR/program-$index"

    echo "[COMPILANDO] $relative"
    if ! g++ -std=c++17 -Wall -Wextra -Wpedantic "$source" -o "$executable"; then
        echo "[ERROR] No se pudo compilar: $relative"
        failed=$((failed + 1))
        continue
    fi
    compiled=$((compiled + 1))

    # Ejecuta pruebas assert solo cuando el programa no solicita entrada por consola.
    if grep -q '#include <cassert>' "$source" && ! grep -Eq 'cin[[:space:]]*>>' "$source"; then
        echo "[PROBANDO] $relative"
        if "$executable"; then
            tested=$((tested + 1))
        else
            echo "[ERROR] Fallo la prueba: $relative"
            failed=$((failed + 1))
        fi
    fi
done < <(find "$ROOT" -type f -name '*.cpp' -print0)

echo
echo "Compilados: $compiled"
echo "Pruebas ejecutadas: $tested"
echo "Fallos: $failed"

if [ "$failed" -ne 0 ]; then
    exit 1
fi
