#include "libft.h"

char *ft_strjoin_free(char *s1, char *s2, int opt)
{
	char *str;
	int len;
	int i;

	len = (int)ft_strlen(s1) + (int)ft_strlen(s2)+1;
	if(!(str = malloc(len)))
		return NULL;
	i = -1;
	while( s1[++i] != '\0')
		str[i] = s1[i];

	if(opt == 1 || opt == 3)
		ft_strdel(&s1);
	if(opt == 2 || opt == 3)
		ft_strdel(&s2);
	while(*s2)
		str[i++] = *(s2++);
	str[i] = '\0';
	return str;
}
