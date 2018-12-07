#include <unistd.h>

void	ft_dec_count(void)
{
	char	a;

	a = '9';
	while (a >= '0' && a <= '9')
	{
		write(1, &a, 1);
		a--;
	}		
}

int	main(void)
{
	ft_dec_count();
	return (0);
}
