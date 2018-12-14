#include <unistd.h>
#include <stdio.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str++ != '\0')
		i++;
	return (i);
}

void	ft_function(char *str)
{
	int		size;
	char	*w;

	size = ft_strlen(str);
	while (size--)
	{
		write(1, &str[size], 1);
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_function(av[1]);	
	return (0);
}

