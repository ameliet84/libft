#include "libft.h"

char *ft_strdup_free(char *s)
{
	char *dest;
	int i;

	dest = malloc(sizeof(char) * ft_strlen(s) + 1);
	i = -1;
	while(s[++i])
		dest[i] = (char)s[i];
	dest[i] = '\0';
	ft_strdel(&s);
	return dest;
}