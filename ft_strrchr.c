#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *temp;
	int ind;
	int ret;

	if(!s)
		return(NULL);
	ind = 0;
	ret = 0;
	temp = (char *)s;
	while(temp[ind])
	{
		ret++;
		ind++;
	}
	while(ind >= 0)
	{
		if(temp[ind] == c)
		{
			ret = ind;
			return(temp + ret);
		}
		ind--;
	}
	return(NULL);
}
