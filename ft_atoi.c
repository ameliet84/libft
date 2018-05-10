#include "libft.h"

int ft_atoi(const char *nbr)
{
	int nb;
	int sign;

	nb = 0;
	while((*nbr >= 9 && *nbr <= 13) || *nbr == ' ')
		++nbr;
	sign = (*nbr == '-') ? -1 : 1;
	nbr = (sign == -1) ? nbr+1 : nbr ;
	while(*nbr>='0' && *nbr <= '9')
		nb = nb*10 + *(nbr++)- '0';
	return nb*sign;
}