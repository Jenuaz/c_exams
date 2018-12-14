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

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void		ft_maff_alpha(void)
{
	int		switcher;
	char	a;

	a = 'a';
	switcher = 0;	
	ft_putchar(a);
	while (a != 90)
	{	
		if (switcher == 1) 
		{	
			switcher = 0;
			a += 32;
		   	a++;	
		}
		else
		{
			switcher = 1;	
			a -= 32;
			a++;
		}
		ft_putchar(a);
	}	
}

int		main(int ac, char **av)
{	
	if (ac == 1)
		ft_maff_alpha();
	else
		write(1, "\n", 1);
	return (0);
}
