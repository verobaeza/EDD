````C
/* Incluir la libreria que gestiona el input/output, necesaria para printf */
#include <stdio.h>

/* Las funciones deben declarar explícitamente el tipo de su input y output*/
float add_floats(float x, float y) {
    return x + y;
}

int main() {
    /* Las variables deben declarar su tipo */
    float x = 0.1; 
    float y = 2;

    /* Los prints no agregan automaticamente un salto de linea */
    /* Los argumentos del print se indican después */
    printf("first_number: %f\n", x);
    printf("second_number: %f\n", y);
    printf("result: %f\n", add_floats(x, y));

    return 0;

}
````

# Tipos
- int: entero
- float: decimal, precisión de 6 decimales
- double: decimal de doble precisión
- char: caracter/letra

````C
#include <stdio.h>

int main() {
    int n_entero; /* Se debe declarar el tipo de variable*/
    n_entero =10

    int n_entero_2 = -10 /* Se puede declarar e inicializar en la misma linea*/
    printf("Números: %i, %d\n", n_entero, n_entero_2); /* Para imprimir se puede usar %i o %d*/

    return 0;
}
````
# Para imprimir variables de distintos tipos
- entero: %i, %d
- float: %f
- double: %lf
- char: %c