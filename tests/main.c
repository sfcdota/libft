#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"
#include <unistd.h>
char	mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int		is_in_set(char c, char const *set)
{
	while(set && *set)
	{
		printf("%d char\t %d set char\n", (unsigned char )c, (unsigned char )*set);
		if (c == *set++)
			return (1);
	}
	return (0);
}

int		begin(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (is_in_set(*s1, set) && *s1++)
		i++;
	return(i);
}

int		end(char const *s1, char const *set, int strlen)
{
	int i;

	i = 0;
	printf("%c is in set? asnwer : %d\n", *(s1 + strlen - i - 1), is_in_set(*(s1 + strlen - i), set));
	while(is_in_set(*(s1 + strlen - i - 1), set))
		i++;
	printf("%d - initial lentght\t %d - end length\n", strlen, strlen - i);
	return (strlen - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *s;
	int b;
	int e;
	char *t;

	b = begin(s1, set);
	e = end(s1, set, ft_strlen(s1));
	s = s1? malloc(e - b + 1) : NULL;
	if (s)
	{
		t = s;
		while (*(s1 + b) && b < e)
			*t++=*(s1 + b++);
		*t = '\0';
	}
	return (s);
}


int main()
{
	// char s1[] = "lorem ipsum dolor sit amet \n \t ";
	// char	set [] = "\t \n";
	// printf("%s\n", ft_strtrim(s1, set));
	printf("%s\n", ft_itoa(-9));
	return (0);
}


