#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
	char *srca;
	char *desta;
	int i;
	int n;

	n = (int) len;
	srca = (char *)src;
	desta = (char *)dest;

	i = -1;
	if(srca < desta)
		while(-- n>= 0)
			*(desta + n) = *(srca + n);
	else 
		while(++ i < n)
			*(desta +i) = *(srca +i);
	return dest;
}	