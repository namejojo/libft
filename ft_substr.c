#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ret;
	size_t count;

	count = 0;
	while(s[count])
		count++;
	if(s == NULL || len <= 0 || !*s || count <= start)
		return(NULL);
	count = 0;
	ret = (char*)malloc(len);
	while(count < len && ((char *)s)[start])
		ret[count++] = ((char *)s)[start++];
	return(ret);
}
