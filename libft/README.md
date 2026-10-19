*Este proyecto ha sido creado como parte del currículo de 42 por cyelmo-l.*

# **Libft - Tu primera librería**

### 1. Descripción

El proyecto Libft consiste en programar nuestra propia librería en C. Dado que en los proyectos de la escuela 42 no se permite el uso de la mayoría de las funciones estándar de C (libc), este proyecto tiene como objetivo recrear estas herramientas desde cero, comprender su funcionamiento interno y construir una base sólida que utilizaremos en todos los proyectos futuros del cursus. El resultado es un archivo libft.a estático y completamente funcional.

### 2. Instrucciones de uso y compilación

El proyecto incluye un Makefile que automatiza la compilación de la librería. No genera ningún ejecutable por sí solo, sino un archivo .a (librería estática) para enlazar con otros programas.

###### Comandos del Makefile:

make o make all: Compila todos los archivos fuente (incluyendo las funciones de listas) y genera la librería libft.a.

make clean: Elimina los archivos objeto (.o) generados durante la compilación.

make fclean: Elimina los archivos objeto y el archivo libft.a.

make re: Ejecuta fclean seguido de all, recompilando todo desde cero.

###### Cómo utilizar la librería en un proyecto:

Clona este repositorio o copia los archivos (incluyendo libft.h y libft.a) en el directorio de trabajo.

Incluye la cabecera en los archivos .c:

#include "libft.h"


Compila el programa enlazando la librería:

gcc tu_programa.c -L. -lft -o tu_ejecutable


### 3. Contenido de la Librería

El proyecto está dividido en tres grandes bloques funcionales:

###### Parte 1: Funciones de libc

Esta sección recrea funciones de la librería estándar de C con el mismo prototipo y comportamiento, añadiendo el prefijo ft_.

De <ctype.h>: Funciones de comprobación y manipulación de caracteres (ej. determinar si un carácter es alfabético, numérico, imprimible, o cambiarlo a mayúsculas/minúsculas).

Funciones: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower.

De <string.h>: Funciones para el cálculo, búsqueda y manipulación de cadenas de texto y bloques de memoria.

Memoria: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp.

Cadenas: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr.

De <stdlib.h>: Funciones para la conversión de tipos y asignación dinámica de memoria.

Funciones: ft_atoi, ft_calloc, ft_strdup.

###### Parte 2: Funciones adicionales

Un conjunto de utilidades que no están en la librería estándar (o no con estos formatos) pero que resultan imprescindibles para la manipulación avanzada de datos.

Gestión de strings: Generación de subcadenas (ft_substr), concatenación (ft_strjoin), eliminación de caracteres en los extremos (ft_strtrim) y división de cadenas en arrays de punteros (ft_split).

Conversión: Transformación de números enteros a cadenas de texto (ft_itoa).

Iteradores: Aplicación de funciones a cada carácter de una cadena (ft_strmapi, ft_striteri).

Escritura (File Descriptors): Envío seguro de caracteres, cadenas o números a descriptores de archivo específicos (como salidas de error o archivos externos).

Funciones: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd.

###### Parte 3: Listas enlazadas

Estructura de datos (t_list) y funciones asociadas para crear, recorrer y destruir listas dinámicas unidireccionales. Esto permite gestionar agrupaciones de datos cuyo tamaño no se conoce en tiempo de compilación.

Funciones: ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap.

### 4. Recursos y uso de IA

###### Referencias:

Páginas del manual de Linux (man 3 [función]).

Pagina maual IBM.

Gitgub.

###### Uso de Inteligencia Artificial:

De acuerdo con las directrices pedagógicas, la lógica, el razonamiento y la escritura del código de este proyecto se han desarrollado de forma personal. Se ha utilizado asistencia de modelos de IA de forma puntual como herramienta de coaching y depuración, concretamente para:

Comprender casos límite (edge cases) históricos de C, como la gestión de Integer Overflows en reservas de memoria dinámica.

Aislar problemas de leaks de memoria en las pruebas de estrés de los punteros a funciones en listas enlazadas (ft_lstmap), recibiendo explicaciones sobre el comportamiento del sistema sin solicitar la reescritura del código.

Crear el Readme.md