#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
void imprimir_argumentos(int num_args, ...)
{
    va_list argumentos;
    va_start(argumentos, num_args);

    for (int i = 0; i < num_args; i++)
    {
        int arg = va_arg(argumentos, int);
        printf("Argumento %d: %d\n", i + 1, arg);
    }

    va_end(argumentos);
}

int probando(char *str)
{
    int i = 0;
    int print = 0;
    while (str[i])
    {
        print = write(1,&str[i],1);
        i++;
    }
    return (print);
}

int main()
{
    int print;

    print = probando("hola que hase");
    printf("%d", print);
    return (0);
}