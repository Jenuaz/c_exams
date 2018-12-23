#include <unistd.h>

void		ft_newline(void)
{
	write(1, "\n", 1);
}

int		ft_strlen(char *str)
{	
	int		i;

	i = 0;
	while (*str++ != '\0')
		i++;
	return (i);
}

void		ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		repeat_alpha(char *str)
{
	int		repeat;
	
	while (*str != '\0')
	{
		repeat = 0;
		(*str > 96 && *str < 123) ? (repeat = *str - 96) : 0;
		(*str > 64 && *str < 91) ? (repeat = *str - 64) : 0;
		if (repeat != 0)
			while (repeat--)
				ft_putchar(*str);
		else
			ft_putchar(*str);
		str++;
	}
}

int			main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	else
		ft_newline();
	return (1);
}
