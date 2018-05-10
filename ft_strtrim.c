#include "libft.h"

char *ft_strtrim(char const *s)
{
	char *str;
	int i;
	int p;
	int len;

	i = -1;
	while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		++i;
	p = i;
	while(s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		++ i;
	len = i - p;
	if(!(str = malloc(len)))
		return NULL;
	i = -1;
	while(++ i < len)
		str[i] = s[i+ p];
	return str;
}