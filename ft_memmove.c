#include "libft.h"

void *ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int ind;
	char *temp;

	temp = (char *)dest;
	ind = 0;
	while(ind < n)
	{
		temp[ind] = ((char *)src)[ind];
		ind++;
	}
	return(dest);
}