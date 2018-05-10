#include "libft.h"

int power(int nbr)
{
	int pwr;

	pwr = (nbr < 0) ? 3 : 2;
	while(nbr/10 != 0)
	{
		pwr ++;
		nbr/=10;
	}
	return pwr;
}

char	*ft_itoa(int nbr)
{
	char *str;
	int pwr;

	pwr = power(nbr);
	if(!(str = malloc(pwr)))
		return NULL;
	if (nbr < 0)
		str[0] = '-';
	str[--pwr] = '\0';
	while( -- pwr>= 0 && str[pwr] != '-')
	{
		str[pwr] = (nbr < 0) ? -nbr%10 + '0' : nbr%10 + '0';
		nbr /=10;
	}
	return str;
}