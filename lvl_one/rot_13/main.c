#include <unistd.h>

void	ft_newline(void)
{
	write(1, "\n", 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	while (*str != '\0')
	{
		if (*str > 64 && *str < 91) 
			((*str + 13) < 91) ? ft_putchar(*str + 13) : ft_putchar(*str - 13);
		else if (*str > 96 && *str < 123)
		    ((*str + 13) < 123) ? ft_putchar(*str + 13) : ft_putchar(*str - 13);
		else
			ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2 && *av[1] != '\0')
		rot_13(av[1]);
	else
		ft_newline();
	return (1);
}
