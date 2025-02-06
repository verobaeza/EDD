Crear un archivo

```bash
touch file.c
```

Abrirlo

````bash
vim file.c
````

Modificarlo
````C
# include <stdio.h>
int main() {
        printf("Hello, World!");
        return 0;
}
````

Compilarlo

````bash
gcc file.c -o file
````

Esto va a crear un ejecutable. Ejecutarlo

````
> ./file
Hello, World!
````
