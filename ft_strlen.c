#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[(int)i] != '\0')
		++i;
	return i;
}