#include "libft.h"

unsigned int ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int ind;

	ind = 0;
	while(ind < size - 1)
	{
		dst[ind] = src[ind];
		ind++;
	}
	dst[ind] = '\0';
	return(ind);
}