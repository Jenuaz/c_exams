#include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		main(void)
{
	ft_putstr("hello");
	return (0);
}
