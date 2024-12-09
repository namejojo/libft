#include "libft.h"

char *ft_strdup(const char *s)
{
	char *src;
	char *dest;
	int ind;
	
	src = (char*)s;
	ind = 0;
	while (src[ind] != '\0')
		ind++;
	dest = (char *)malloc(ind + 1);
	ind = 0;
	while (src[ind] != '\0')
	{
		dest[ind] = src[ind];
		ind++;
	}
	dest[ind] = '\0';
	return(dest);
}