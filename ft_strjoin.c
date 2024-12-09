#include "libft.h"

static char *ft_strcpy(char *dest, char *src)
{
	int ind;
	
	ind = 0;
	while (src[ind] != '\0')
	{
		dest[ind] = src[ind];
		ind++;
	}
	dest[ind] = '\0';
	return (dest);
}

static char* ft_strcat(char *dest, char *src)
{
	int ind;
	int ind2;

	ind = 0;
	ind2 = ft_strlen(dest);
	while(src[ind] != '\0')
		dest[ind2++] = src[ind++];
	dest[ind2] = '\0';
	return(dest);
}


char *ft_strjoin(char const *s1, char const *s2)
{
	int total;
	char *dest;

	total = 0;
	total = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	dest = malloc((total + 1) * sizeof(char) * 2);
	ft_strcpy(dest, (char*)s1);
	ft_strcat(dest, (char*)s2);
	return(dest);
}
