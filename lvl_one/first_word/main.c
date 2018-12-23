#include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != '\0')
		i++;
	return (i);
}

int		ft_wordlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0' && *str != ' ')
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_newline(void)
{
	write(1, "\n", 1);
}

void	ft_first_word(char *str)
{
	while (*str != '\0' && (*str == ' ' || *str == '\t'))
		str++;
	write(1, str, ft_wordlen(str));
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_first_word(av[1]);
	else
		ft_newline();
	return (1);
}
