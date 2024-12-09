#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char *temp;
	size_t ind;

	ind = 0;
	temp = (char *)s;
	while(temp[ind] != c && ind < n - 1 && temp[ind])
		ind++;
	if(temp[ind] != c)
		return(NULL);
	return(temp + ind);
}