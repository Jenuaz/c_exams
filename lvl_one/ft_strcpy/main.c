#include <string.h>
#include <stdio.h>

char		*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;	
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char hello[40];
	char world[20];

	printf("%s", ft_strcpy(hello, "FOF"));	
}
