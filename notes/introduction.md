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

# Condicionales
- La condición va entre paréntesis
- Es "else if"
- if, else if, else NO llevan ; al final
````C
#include <stdio.h>

int main(){
    int x = 2;

    if(x>7)
    {
        printf("x > 7\n");
    }
    else if(x < 5>)
    {
        printf("x < 5\n");
    }
    else 
    {
        printf("x <= 7 & x>= 5");
    }

    return 0
}
````

# Loops
Tampoco llevan ; al final
## For

``for ( init-clause ; cond-expression ; iteration-expression )``

````C
#include <stdio.h>
int main() {
        for(int i=0; i<5; i+=1)
        {
                printf("Ciclo %i!\n", i);
        }

        return 0;
}
````

## While
``while (expression)``
````C
#include <stdio.h>
int main(){
        int i=0;
        while(i<5)
        {
                printf("Ciclo %i!\n",i);
                i+=1;
        }

        return 0;
}
````

## Break
Causes the enclosing for, while or do-while loop or switch statement to terminate.

````C
#include <stdio.h>
int main(){
    while(alive) 
    {
        // codigo
        if (must_kill) break;
    }

    return 0;
````

## Continue
Causes the remaining portion of the enclosing for, while or do-while loop body to be skipped.

````C
int main(){
    while(alive) 
    {
        // codigo
        if (must_skip) continue;

        // codigo
    }

    return 0;
````

# Funciones