#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	while( i < len && haystack[i] && needle[i])
		if (haystack[i] != needle[i])
		{
			i = 0;
			haystack ++;
		}
		else
			++i;
	return ( i == len || needle[i] == '\0')? (char *)haystack : NULL;
}