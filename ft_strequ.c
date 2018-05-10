#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	int i;

	i =0;
	while(s1[i] == s2[i] && s2[i] && s1[i])
		++i;
	return (s1[i] != '\0' || s2[i] != '\0') ? 0 : 1;
}
