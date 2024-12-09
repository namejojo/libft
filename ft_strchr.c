#include "libft.h"

void *ft_strchr(const char *s, int c)
{
	char *temp;

	temp = (char *)s;
	while(*temp != c && *temp)
		temp++;
	if(!*temp)
		return(NULL);
	return(temp);
}