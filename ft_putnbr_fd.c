#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

static int ft_nbrlen(int nb)
{
	int a = nb, b = 0;

	while (a >=10){
		a = a/10;
		b++;
	}
	return b;
}

void ft_putnbr_fd(int n, int fd)
{
	char ch;
	int i;
	int a;
	int b;

	b = ft_nbrlen(n);
	while (b >= 0)
	{
		i = 0;
		a = n;

		while(i != b){
			a = a/10;
			i++;
		}
		if (a>=10)
			a = a%10;
		ch = a + '0';
		write(fd, &ch, 1);
		b--;
	}
}
