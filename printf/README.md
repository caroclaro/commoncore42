*Este proyecto ha sido creado como parte del currículo de 42 por cyelmo-l.*

## Descripción
El proyecto `ft_printf` consiste en recrear el comportamiento de la función `printf` original de la biblioteca estándar de C. El objetivo principal es construir una herramienta capaz de gestionar un número variable de argumentos y formatear la salida de texto hacia la salida estándar. 

La función principal soporta y formatea adecuadamente las siguientes conversiones:
- `%c`: Imprime un solo carácter.
- `%s`: Imprime una cadena de caracteres.
- `%p`: Imprime un puntero en formato hexadecimal.
- `%d` / `%i`: Imprime un número decimal con base 10.
- `%u`: Imprime un número decimal sin signo (base 10).
- `%x`: Imprime un número hexadecimal en minúsculas.
- `%X`: Imprime un número hexadecimal en mayúsculas.
- `%%`: Imprime el símbolo del porcentaje.

Este proyecto integra y amplía la funcionalidad del proyecto anterior, la `libft`, permitiendo el uso de sus funciones dentro del desarrollo.

## Instrucciones

El proyecto consta de una arquitectura de directorios específica: los archivos de cabecera (`.h`) están en la carpeta `libraries/`, el código fuente de printf está en la carpeta `printf/`, y las dependencias de la biblioteca estándar básica se encuentran en `libft/`.

Para compilar y utilizar la biblioteca, sigue estos pasos:

1. **Compilación principal:** Ejecuta `make` en la raíz del proyecto. El `Makefile` principal está diseñado para entrar automáticamente en el directorio `libft/`, ejecutar su propio `Makefile` para crear `libft.a`, y luego copiar ese archivo a la raíz. Posteriormente, compila los archivos `.c` de la carpeta `printf/` y los empaqueta todos juntos en el archivo estático final `libftprintf.a`.
2. **Limpieza de objetos:** Si deseas eliminar los archivos `.o` generados durante la compilación, ejecuta `make clean`. Esto limpiará tanto los objetos de `ft_printf` como los de la carpeta `libft/`.
3. **Limpieza total:** Ejecutando `make fclean` se eliminarán los archivos objeto y también los archivos compilados finales (`libft.a` y `libftprintf.a`).
4. **Recompilación:** Puedes usar `make re` para realizar un `fclean` seguido de un `make`, recompilando todo el proyecto desde cero.

Para incluir la biblioteca en tus futuros proyectos, deberás compilar tus archivos `.c` enlazando esta biblioteca y referenciando su cabecera:
`cc tu_archivo.c -L. -lftprintf -I ./libraries`

## Recursos
- **Documentación oficial:** Las guías principales de referencia para el desarrollo han sido las páginas del manual de C, específicamente `man 3 printf` para el comportamiento de la función y `man 3 stdarg` para el manejo de argumentos variables.
- **Uso de IA:** Se ha utilizado un modelo de Inteligencia Artificial para el análisis estructural del proyecto y para la redacción y formateo de este documento `README.md`, garantizando que la sintaxis y explicación sean claras. No se ha utilizado la IA para escribir o alterar el código fuente en C ni la lógica del proyecto.

## Algoritmo y Estructura de Datos

El algoritmo principal se fundamenta en un procesador lineal que lee la cadena de formato carácter por carácter. La estructura del flujo de control es la siguiente:
- Se imprime cada carácter regular directamente mediante la llamada al sistema `write`.
- Al detectar el carácter especial `%`, el flujo se redirige a una función selectora (`sorter`).
- Esta función evalúa el siguiente carácter y llama a funciones auxiliares especializadas (`ft_putcharcont`, `ft_putnbrcont`, `ft_puthex`, etc.), pasando la lista de argumentos variables (`va_list`).

**Estructuras de datos:**
Para cumplir con las restricciones de rendimiento y evitar fugas de memoria, se ha evitado el uso de estructuras de datos pesadas o reservas dinámicas de memoria (como las listas enlazadas `t_list` presentes en la `libft`). Se hace un uso intensivo de tipos de datos primitivos e integrales, destacando el uso de `uintptr_t` para garantizar que la conversión de punteros a hexadecimales funcione de manera segura y portable sin importar la arquitectura del sistema.

**Elección de algoritmos numéricos:**
Para la representación de enteros, decimales y bases hexadecimales de longitud variable, se ha optado por implementar algoritmos recursivos. En lugar de reservar un buffer (array) estático o dinámico para almacenar los dígitos antes de imprimirlos, la recursividad divide el número hasta llegar al dígito más significativo, utilizando la pila de llamadas para imprimir los dígitos en el orden correcto a medida que las funciones retornan. Esto mantiene el código conciso, modular y sin necesidad de gestionar la memoria dinámica.