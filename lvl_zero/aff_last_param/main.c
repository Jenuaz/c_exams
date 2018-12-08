#include <unistd.h>
#include <stdio.h>
int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != '\0')
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	(ac > 1) ? \
	   	write(1, av[ac - 1], ft_strlen(av[ac -1])) : \
	   	write(1, "\n", 1);
	return (0);
}
