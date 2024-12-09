#include "libft.h"

void *ft_memset(void *s, int c, unsigned int n)
{
	unsigned int ind;
	
	ind = 0;
	while(ind <= n)
	{
		((char *)s)[ind] = c;
		ind++;
	}
	return(s);
}