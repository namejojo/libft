#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t ind;
	char *str1;
	char *str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	ind = 0;
	while(str1[ind] && str2[ind] && str1[ind] == str2[ind] && ind < n - 1)
		ind++;
	return(str1[ind] - str2[ind]);
}