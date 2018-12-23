#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ulstr(char *str)
{
	while (*str != '\0')
	{
		if (*str > 64 && *str < 91) 
		   	ft_putchar(*str + 32);
		else if (*str > 96 && *str < 123)
		   	ft_putchar(*str - 32);
		else
			ft_putchar(*str);
		str++;
	}
}

int			main(int ac, char **av)
{
	if (ac == 2)
		ulstr(av[1]);
	return (1);
}
