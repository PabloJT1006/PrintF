#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,sizeof(char));
}
//aqui se pone el unsigned pero despues en las comprobaciones,
//si el numero es negativo, hacer putchar '-', esto solo
//para el la d y la i
void	ft_putnbr(unsigned int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

int main(void)
{
    ft_putnbr(-21);
    // printf("%u", -20);
    return(0);
}