#include "libft.h"
#include <stdio.h>

static char *do_stuff(char const *s, char c, unsigned int *i)
{
	char *str;

	*i = 0;
		while(*s == c)
			++s;
		while(s[*i] != c && s[*i])
			++(*i);
		if(!(str = malloc(sizeof(char)* (*i)+1)))
			return NULL; 
		ft_strncpy(str, s, (*i));
		str[(*i)] = '\0';
	return str;	
}

static char *skip(char *s, char c)
{
	while(*s == c)
		++s;
	return s;
}

static int word_count(char const *s, char c)
{
	unsigned int i;
	int n;

	i =-1;
	n =0;
	while(++i < ft_strlen(s))
		if(s[i] == c && s[i+1] && s[i+1] != c )
			++n;
	return n;
}

char **ft_strsplit(char const *s, char c)
{
	char **str;
	unsigned int i;
	int j;
	int n;

	s = skip((char *)s, c);	
	n  = word_count((char *)s, c);
	if(!(str = malloc(sizeof(char *)*n)))
		return NULL;
	if(*s == '\0')
	{
		str[0] = NULL;
		return str;
	}
	j = 0;
	while(j <= n)
	{
		str[j++] = do_stuff(s, c, &i);	
		s = s+i;
		s = skip((char *)s, c);	
	}
	str[j] = NULL;
	return str;
}
