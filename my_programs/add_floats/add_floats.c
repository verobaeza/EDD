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
