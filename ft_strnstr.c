#include "libft.h"

char *ft_strnstr(const char *haystack, const char *ndl, int n)
{
	int ind;
	int cnt;
	int ind2;
	char *hst;

	if(haystack == NULL || ndl == NULL)
		return(NULL);
	ind2 = 0;
	cnt = 0;
	ind = 0;
	hst = (char *)haystack;
	while(ndl[ind++])
		cnt++;
	while(hst[ind2])
	{
		ind = 0;
		while(hst[ind2] == ndl[ind] && hst[ind2] && ind2 < n)
		{
			ind++;
			ind2++;
		}
		if(ind == cnt)
			return(hst + ind2 - 1);
		ind2++;
	}
	return(NULL);
}