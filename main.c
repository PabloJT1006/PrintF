#include "ft_printf.h"
#include <stdio.h>
int main (void)
{
    ft_printf(" Formato d e i hola %d la verdad que %d si no\n",0,6);
    ft_printf(" Formato c %c Formato 2c %c\n",'a','X');
    ft_printf(" Formato s %s\n","hola");
    // ft_printf(" Formato p %p\n",-1);
    // printf("Printf formato P pero el de verdad %p\n",1);
    ft_printf(" Formato u %u\n",45);
    ft_printf(" Formato x %x\n",26);
    ft_printf(" Formato X %X\n",26);
    ft_printf(" Formato %%\n");
    ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
}