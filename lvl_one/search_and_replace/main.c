#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str);

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void 	ft_newline(void)
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

void	ft_replace(char *str, char *what, char *by)
{
	int		allocate;
	char	*newstr;
	char 	*begin;

	(*str != '\0') ? (allocate = ft_strlen(str)) : 0;
	newstr = (char *)malloc(sizeof(char) * (allocate + 1));
	begin = newstr;
	while (*str != '\0')
	{
		(*str == *what) ? (*newstr = *by) : (*newstr = *str);
		str++;
		newstr++;
	}
	*newstr = '\0';
	ft_putstr(begin);	
}

int		main(int ac, char **av)
{
	if (ac == 4)
		ft_replace(av[1], av[2], av[3]);
	else
		ft_newline();
	return (1);
}
