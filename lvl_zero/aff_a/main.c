#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	checker;

	checker = 1;
	if (ac == 2)
	{	
		while(*av[1] != '\0')
		{
			if (*av[1] == 'a' && checker == 1)
			{
				write(1, "a\n", 2);
				checker = 0;
			}
			*av[1]++;
		}
		(checker == 1) ? write(1, "\n", 1) : 0;	
	}
	else
		write(1, "a\n", 2);
	return (0);
}
