#include "libft.h"

unsigned int ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int ind;

	ind = 0;
	while(dst[ind])
		ind++;
	while(ind < size - 1)
	{
		dst[ind] = *src++;
		ind++;
	}
	dst[ind] = '\0';
	return(ind);
}