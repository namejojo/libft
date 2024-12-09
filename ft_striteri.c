#include "libft.h"

void ft_striteri(char const *s, void (*f)(unsigned int, char*))
{
	int ind;
	char *mod;
	
	mod = (char*)s;
	ind = 0;
	while(mod[ind])
	{
		f(ind, mod);
		ind++;
	}
}