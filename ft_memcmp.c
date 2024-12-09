#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t ind;
	char *s1;
	char *s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	ind = 0;
	while(s1[ind] && s2[ind] && s1[ind] == s2[ind] && ind < n - 1)
		ind++;
	return(s1[ind] - s2[ind]);
}