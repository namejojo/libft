#include "libft.h"

int ft_atoi(char *str)
{
	int pos;
	int ind;
	long int num;

	pos = 1;
	ind = 0;
	num = 0;
	while ((str[ind] >= 9 && str[ind] <= 13) || str[ind] == 32 || str[ind] == 32)
		ind++;
	if((str[ind] == '+') && (str[ind + 1] != '-' || str[ind + 1] != '+'))
		ind++;
	else if((str[ind] == '+' || str[ind] == '-') && (str[ind + 1] == '-' || str[ind + 1] == '+'))
		return(-1);
	else if(str[ind] == '-')
	{
		pos = -1;
		ind++;
	}
	while (str[ind] >= '0' && str[ind] <= '9' ) 
		num = num * 10 - 48 + str[ind++];
	if(num > 2147483647 || num < -2147483648)
		return(-1);
	return(((int)num) * pos);
}