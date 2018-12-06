#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str++ != '\0')
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_strlen(av[1]));
	else 
		printf("No argument");
	return (1);	
}
