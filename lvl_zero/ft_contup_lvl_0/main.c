#include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != '\0')
		i++;
	return (i);
}

void	ft_print_numbers(void)
{
	char *a;

	a = "0 1 2 3 4 5 6 7 8 9"; 
	write(1, a, ft_strlen(a)); 
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
