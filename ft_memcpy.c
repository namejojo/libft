#include "libft.h"

void *ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int ind;

	ind = 0;
	while(ind <= n)
	{
		((char *)dest)[ind] = ((char *)src)[ind];
		ind++;
	}
	return(dest);
}