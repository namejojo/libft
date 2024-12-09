#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int ind;
	char *ret;
	char *mod;
	
	mod = (char*)s;
	ind = -1;
	ret = (char*)malloc(ft_strlen(mod) + 1);
	ret[ft_strlen(mod)] = '\0';
	while(mod[++ind])
	{
		ret[ind] = f(ind, mod[ind]);
	}
	return(ret);
}