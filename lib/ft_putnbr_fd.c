#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{

	long int a;

	a = n;
	if (a < 0)
	{
		a *= -1;
		ft_putchar_fd('-', fd);
	}
	if ((a / 10) > 0)
		ft_putnbr_fd(a / 10, fd);
	ft_putchar_fd(a % 10 + 48, fd);
}



