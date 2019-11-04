#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int a[] = {90, 5, 2, 4, 1, 3, 8, 2, 15, 5, 0, 12, 9};
	int size = 13;
	int *tab = a;

	ft_sort_int_tab(tab, size);

	for(int z = 0; z < size; z++)
	{
		printf("%d ", tab[z]);
	}
}
