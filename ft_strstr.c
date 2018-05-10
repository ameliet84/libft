#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	size_t len;
	size_t i;

	len = ft_strlen(needle);
	i = -1;
	while(++ i < len && haystack[i])
		if (haystack[i] != needle[i])
		{
			i = -1;
			haystack ++;
		}
	return ( i == len)? (char *)haystack : '\0';
}
