# Ejercicios de programación en C++

**Autor:** Kerem Akcan

## Descripción

Colección de ejercicios y prácticas resueltas en C++ para estudiantes que están
aprendiendo programación. Los ejemplos usan principalmente la biblioteca estándar
de C++ (`<iostream>` y, en las pruebas, `<cassert>`). No requieren dependencias externas.

Los ejercicios están pensados como material didáctico. Algunos trabajan con tamaños
de entrada acotados o devuelven un valor de error documentado cuando reciben datos
no válidos; consulta los comentarios de cada archivo.

!!!!
Como traduje estos textos con IA desde mi lengua materna, es posible que tengan algún pequeño error.

## Estructura del proyecto

| Carpeta | Contenido |
| --- | --- |
| `01-fundamentos/` | Entrada/salida, condicionales, bucles y primeros algoritmos. |
| `02-ejercicios-basicos/` | Números primos, factoriales, sumatorios y otros algoritmos básicos. |
| `03-ejercicios-avanzados/` | Arrays, ordenación, Fibonacci y números de Armstrong. |
| `04-examenes/` | Soluciones a ejercicios de prácticas y exámenes. |

Los directorios `02-ejercicios-basicos/` y `03-ejercicios-avanzados/` incluyen
un archivo `00-enunciados.txt` con los enunciados y la correspondencia con los
archivos. En `01-fundamentos/` y `04-examenes/`, los enunciados se encuentran
en los comentarios de los propios ejercicios o en el material de cada práctica.

## Requisitos

- Un compilador compatible con C++17, por ejemplo `g++`.
- Linux, macOS o Windows con WSL/Git Bash para ejecutar el script de comprobación.

## Compilar y ejecutar un ejercicio

Desde la raíz del repositorio:

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic 02-ejercicios-basicos/02-factorial.cpp -o factorial
./factorial
```

En Windows, ejecuta `factorial.exe` en lugar de `./factorial`.

## Comprobar todos los ejercicios

En Linux, macOS, WSL o Git Bash:

```bash
bash probar-todo.sh
```

El script compila todos los archivos `.cpp`. También ejecuta las pruebas automáticas
basadas en `assert` de los archivos que no necesitan entrada interactiva. Los ejercicios
interactivos se compilan, pero debes ejecutarlos manualmente e introducir los datos.

## Notas

- Cada archivo `.cpp` tiene su propio `main()`, por lo que debe compilarse por separado.
- Las funciones que reciben arrays también reciben su cantidad de elementos; quien las
  llama debe asegurarse de que ese tamaño coincide con el array real.
- En algunos ejercicios se usan tipos enteros de capacidad limitada. Los límites o
  entradas no admitidas se indican en los comentarios del archivo.

Estos ejercicios forman parte de mi aprendizaje de C++ durante mis estudios.

Te deseo mucho éxito en tus estudios.
-Kerem-
