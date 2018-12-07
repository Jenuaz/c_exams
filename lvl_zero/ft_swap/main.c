#include <unistd.h>
#include <stdio.h>

void	ft_swap(int **a, int  **b)
{
	int *tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

int		main(int ac, char **av)
{
	int		a;
	int		b;
	int		*c;
	int		*d;

	a = (int)av[1];
	b = (int)av[2];
	c = &a;
	d = &b;
	printf("C %d\n", *c);
	printf("D %d\n", *d);
	(ac == 3) ? ft_swap(&c, &d) : 0;
	printf("C %d\n", *c);
	printf("D %d\n", *d);
	return (1);
}
