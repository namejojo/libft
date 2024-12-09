#include "libft.h"

static int ft_check(char ch, char *charset)
{
	int ind;

	ind = 0;
	while(charset[ind])
	{
		if(charset[ind] == ch)
			return(1);
		ind++;
	}
	return(0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int ind;
	int count1;
	int count2;
	char *ret;

	ind = 0;
	count1 = 0;
	count2 = 0;
	while(ft_check(s1[count1], (char*)set) == 1 && s1[count1])
		count1++;
	while(s1[count2 + 1])
		count2++;
	while(ft_check(s1[count2], (char*)set) == 1)
		count2--;
	ret = (char*)malloc(count2 - count1 + 1);
	while(count1 <= count2)
		ret[ind++] = ((char*)s1)[count1++];
	ret[++ind] = '\0';
	return(ret);
}
