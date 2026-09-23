# Corte 2 - Entrega 2

## Integrantes

- July Ximena Romero Liscano
- Nombre del compañero

## Descripción

En esta actividad se desarrollaron cuatro ejercicios de programación utilizando C++:

### LeetCode

1. **1797 - Design Authentication Manager**
   - Implementación de un administrador de tokens de autenticación.
   - Se utiliza `unordered_map` para almacenar los tokens y su tiempo de expiración.

2. **3709 - Exam Score Tracker**
   - Implementación de un sistema para registrar resultados de exámenes.
   - Se utilizan vectores y sumas prefijas para consultar puntajes acumulados.

### Exercism

3. **Crypto Square**
   - Normalización de texto y organización de los caracteres mediante una estructura cuadrada.
   - Se utilizan operaciones con cadenas y funciones matemáticas.

4. **Bank Account**
   - Implementación de una cuenta bancaria con operaciones de apertura, cierre, depósito, retiro y consulta de saldo.
   - Se manejan operaciones inválidas mediante excepciones.

## Metodología

Para el desarrollo de los ejercicios se siguieron estos pasos:

1. Analizar el problema y sus restricciones.
2. Identificar las estructuras de datos necesarias.
3. Implementar la solución en C++.
4. Probar el funcionamiento de cada ejercicio.
5. Organizar los archivos en carpetas según la plataforma.
6. Utilizar CMake para compilar los programas.
7. Verificar la ejecución de los programas mediante pruebas.

## Dificultades encontradas

Durante el desarrollo se presentaron dificultades relacionadas con:

- Comprensión de las estructuras de datos utilizadas.
- Manejo de excepciones en Bank Account.
- Organización y normalización de cadenas en Crypto Square.
- Manejo de tiempos de expiración en Authentication Manager.
- Uso de sumas prefijas y búsqueda binaria en Exam Score Tracker.
- Configuración de CMake para compilar los diferentes ejercicios.

## Herramientas y recursos

- C++
- CMake
- Git
- GitHub
- LeetCode
- Exercism
- Visual Studio Code / terminal Linux

## Compilación

Para compilar el proyecto:

```bash
cmake -S . -B build
cmake --build build
