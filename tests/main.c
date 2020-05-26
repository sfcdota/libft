#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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


void	printarray(char **t,int i)
{
	printf("iteration %d\nCURRENT ARRAY\n", i);
	while (*t)
	{
		printf("%s\n", *t);
		t++;
	}
	printf("CURRENT ARRAY END\n");
}

static int		word_length(char const *s, char c)
{
	int i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static char const	*next_word(char const *s, char c)
{
				printf("next word %c\n", *s);

	while (*s && *s != c)
		s++;
	while (*s && *s == c)
		s++;
	return (s);
}

static int		words_count(char const *s, char c)
{
	int i;

	i = 1;
	while (*next_word(s, c))
	{
		s = next_word(s, c);
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**t;
	int		words;
	int i;

	i = 0;
	if (s)
	{
		words = words_count(s, c);
		printf("words count %d \n", words);

		t = malloc((words + 1) * sizeof(char *));
		if (t)
		{
			t[words] = NULL;
			while(*s)
			{
				t[i] = malloc(word_length(s, c) + 1);
				printf("step 1\n");

				if (!t[i])
					return (NULL);
				ft_strlcpy(t[i], s, word_length(s, c) + 1);
				printf("step 2\n");

				s = next_word(s, c);
				printf("step 3\n");
				printf("iteration = %d\narray = %s\n", i, t[i]);

				i++;
			}
		}
		return (t);
	}
	return (NULL);
}

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int main()
{
	// char s1[] = "lorem ipsum dolor sit amet \n \t ";
	// char	set [] = "\t \n";
	// printf("%s\n", ft_strtrim(s1, set));
	char *s = ft_itoa(-9);
	ft_print_result(s);

	//char *s = "   ";
	//char **t = ft_split(s, ' ');
	//printf("\n\n\n\nARRAY IS READY \n\n\n\n");
	return (0);
}


