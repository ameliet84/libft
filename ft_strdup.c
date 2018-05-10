#include "libft.h"

char *ft_strdup(const char *s)
{
	char *dest;
	int i;

	dest = malloc(sizeof(char) * ft_strlen(s) + 1);
	i = -1;
	while(s[++i])
		dest[i] = (char)s[i];
	dest[i] = '\0';
	return dest;
}