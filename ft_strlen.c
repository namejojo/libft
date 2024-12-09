#include "libft.h"

unsigned int ft_strlen(char *s)
{
	int ind;
	
	ind = 0;
	while(s[ind])
		ind++;
	return(ind);
}