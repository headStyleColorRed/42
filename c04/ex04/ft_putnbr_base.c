#include <unistd.h>
#include <stdio.h>
void	printer(char num)
{
	write(1, &num, 1);
}

int		base_length(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

char	*ft_putnbr(int nb, int base)
{
	char number_string[99999];
	char *p_number_string = number_string;
	int i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		number_string[i] = '-';
		i++;
	}
	else if (nb / base > 0)
	{
		number_string[i] = (nb % base) + 48;
		nb /= base;
		i++;
	}
	number_string[i] = (nb % base) + 48;
	return (p_number_string);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	int i;
	int j;
	char reverted_number[9999];
	char *p_reverted_number = reverted_number;

	p_reverted_number = ft_putnbr(nbr, base_length(base));
	j = base_length(p_reverted_number) - 1;
	while (j >= 0)
	{
		i = p_reverted_number[j] - 48;
		write(1, &base[i], 1);
		j--;
	} 
}
