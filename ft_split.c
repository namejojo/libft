#include "libft.h"

static int ft_check(char ch, char *charset)
{
	int ind;

	ind = 0;
	while(charset[ind] != '\0')
	{
		if(charset[ind] == ch)
			return(1);
		ind++;
	}
	return(0);
}

static void ft_split_strdup(char *str, char *charset, char **strs)
{
	int ind;
	int str_count;
	int char_count;

	str_count = 0;
	ind = 0;
	
	while(str[ind] != '\0')
	{
		char_count = 0;
		while(ft_check(str[ind], charset) == 1)
			ind++;
		if(ft_check(str[ind], charset) == 0)
		{
			while(ft_check(str[ind], charset) == 0 && str[ind] != '\0')
			{
				strs[str_count][char_count] = str[ind];
				char_count++;
				ind++;
			}
			strs[str_count][char_count] = '\0';
			str_count++;
		}
	}
}

static void ft_malloc(char *str, char *charset, char **strs)
{
	int ind;
	int str_count;
	int char_count;

	str_count = 0;
	ind = 0;
	
	while(str[ind] != '\0')
	{
		char_count = 0;
		while(ft_check(str[ind], charset) == 1)
			ind++;
		if(ft_check(str[ind], charset) == 0)
		{
			while(ft_check(str[ind], charset) == 0 && str[ind] != '\0')
			{
				char_count++;
				ind++;
			}
			strs[str_count] = (char *)malloc((char_count + 1) * sizeof(char));
			str_count++;
		}
	}
}

static int ft_str_count(char *str, char *charset)
{
	int ind;
	int str_count;

	str_count = 0;
	ind = 0;
	
	while(str[ind] != '\0')
	{
		while(ft_check(str[ind], charset) == 1)
			ind++;
		if(ft_check(str[ind], charset) == 0)
		{
			while(ft_check(str[ind], charset) == 0 && str[ind] != '\0')
				ind++;
		str_count++;
		}
	}
	return(str_count);
}


char **ft_split(char *str, char *charset)
{
	char **strs;
	int str_count;
	
	str_count = ft_str_count(str, charset);
	strs = (char **)malloc((str_count + 1) * sizeof(char*));
	strs[str_count] = NULL;
	ft_malloc(str, charset, strs);
	ft_split_strdup(str, charset, strs);
	return(strs);
}
