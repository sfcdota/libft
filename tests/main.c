#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <unistd.h>
#include <strings.h>
#include <bsd/string.h>

#define TEST_SUCCESS "SUCCESS\n"
#define TEST_FAILED "FAILED\n"
#define exit(x) printf(x);


// char	mapi(unsigned int i, char c)
// {
// 	static int indexArray[11] = {0};

// 	if (i > 10 || indexArray[i] == 1)
// 		write(1, "wrong index\n", 12);
// 	else
// 		indexArray[i] = 1;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	else
// 		return (c);
// }

// int		is_in_set(char c, char const *set)
// {
// 	while(set && *set)
// 	{
// 		printf("%d char\t %d set char\n", (unsigned char )c, (unsigned char )*set);
// 		if (c == *set++)
// 			return (1);
// 	}
// 	return (0);
// }

// int		begin(char const *s1, char const *set)
// {
// 	int i;

// 	i = 0;
// 	while (is_in_set(*s1, set) && *s1++)
// 		i++;
// 	return(i);
// }

// int		end(char const *s1, char const *set, int strlen)
// {
// 	int i;

// 	i = 0;
// 	printf("%c is in set? asnwer : %d\n", *(s1 + strlen - i - 1), is_in_set(*(s1 + strlen - i), set));
// 	while(is_in_set(*(s1 + strlen - i - 1), set))
// 		i++;
// 	printf("%d - initial lentght\t %d - end length\n", strlen, strlen - i);
// 	return (strlen - i);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char *s;
// 	int b;
// 	int e;
// 	char *t;

// 	b = begin(s1, set);
// 	e = end(s1, set, ft_strlen(s1));
// 	s = s1? malloc(e - b + 1) : NULL;
// 	if (s)
// 	{
// 		t = s;
// 		while (*(s1 + b) && b < e)
// 			*t++=*(s1 + b++);
// 		*t = '\0';
// 	}
// 	return (s);
// }


// void	printarray(char **t,int i)
// {
// 	printf("iteration %d\nCURRENT ARRAY\n", i);
// 	while (*t)
// 	{
// 		printf("%s\n", *t);
// 		t++;
// 	}
// 	printf("CURRENT ARRAY END\n");
// }

// static int		word_length(char const *s, char c)
// {
// 	int i;

// 	i = 0;
// 	while (*s && *s != c)
// 	{
// 		i++;
// 		s++;
// 	}
// 	return (i);
// }

// static char const	*next_word(char const *s, char c)
// {
// 				printf("next word %c\n", *s);

// 	while (*s && *s != c)
// 		s++;
// 	while (*s && *s == c)
// 		s++;
// 	return (s);
// }

// static int		words_count(char const *s, char c)
// {
// 	int i;

// 	i = 1;
// 	while (*next_word(s, c))
// 	{
// 		s = next_word(s, c);
// 		i++;
// 	}
// 	return (i);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**t;
// 	int		words;
// 	int i;

// 	i = 0;
// 	if (s)
// 	{
// 		words = words_count(s, c);
// 		printf("words count %d \n", words);

// 		t = malloc((words + 1) * sizeof(char *));
// 		if (t)
// 		{
// 			t[words] = NULL;
// 			while(*s)
// 			{
// 				t[i] = malloc(word_length(s, c) + 1);
// 				printf("step 1\n");

// 				if (!t[i])
// 					return (NULL);
// 				ft_strlcpy(t[i], s, word_length(s, c) + 1);
// 				printf("step 2\n");

// 				s = next_word(s, c);
// 				printf("step 3\n");
// 				printf("iteration = %d\narray = %s\n", i, t[i]);

// 				i++;
// 			}
// 		}
// 		return (t);
// 	}
// 	return (NULL);
// }

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// void	memset_unit1()
// {
// 	const int size = 20;
// 	char b1[0xF00];
// 	char b2[0xF00];

// 	memset(b1, 'B', 0xF00);
// 	memset(b2, 'B', 0xF00);
// 	memset(b1, 'A', size);
// 	ft_memset(b2, 'A', size);
// 	if (!memcmp(b1, b2, 0xF00))
// 	{
// 		exit(TEST_SUCCESS);
// 	}
// 	else
// 	{
// 		for (register int __i = 0; __i < size + 2; ++__i)
// 		for (register int __i = 0; __i < size + 2; ++__i)
// 			exit(TEST_FAILED);
// 	}
// }

// void	memset_unit2()
// {
// 	const int size = 18;
// 	char b1[0xF00];

// 	memset(b1, 'B', 0xF00);
// 	char *r1 = memset(b1, 'A', size);
// 	char *r2 = ft_memset(b1, 'A', size);
// 	for (register int __i = 0; __i < size; ++__i)
// 	for (register int __i = 0; __i < size; ++__i)
// 	if (r1 != r2)
// 		exit(TEST_FAILED);
// 	r1 = memset("", 'A', (0));
// 	r2 = ft_memset("", 'A', 0);
// 	if (r1 != r2)
// 		exit(TEST_FAILED);
// 	exit(TEST_SUCCESS);
// }

// void memset_unit3()
// {
// 	ft_memset(((void*)0), 'a', 12);
// }

// void memset_unit4()
// {
// 	char buff[0xF00];
// 	char buff2[0xF00];

// 	memset(buff, 0, sizeof(buff));
// 	memset(buff2, 0, sizeof(buff2));
// 	ft_memset(buff, '\xff', 0);
// 	memset(buff2, '\xff', (0));
// 	if (!memcmp(buff, buff2, 0xF00))
// 		exit(TEST_SUCCESS);
// 	exit(TEST_FAILED);
// }

// void memset_unit5()
// {
// char *b1 = (char*)malloc(sizeof(char) * (0xF0000 + 1));
// 	char *b2 = (char*)malloc(sizeof(char) * (0xF0000 + 1));

// 	*b1 = 0;
// 	*b2 = 0;
// 	memset(b1, '\5', 0xF0000);
// 	ft_memset(b2, '\5', 0xF0000);
// 	if (!memcmp(b1, b2, 0xF0000))
// 	{
// 		free(b1);
// 		free(b2);
// 		exit(TEST_SUCCESS);
// 	}
// 	free(b1);
// 	free(b2);
// 	exit(TEST_FAILED);
// }


	void	content_clear(void *qq)
	{
		free(qq);
	}


int main()
{
	// char s1[] = "lorem ipsum dolor sit amet \n \t ";
	// char	set [] = "\t \n";
	// printf("%s\n", ft_strtrim(s1, set));
	//char *s = ft_itoa(-9);
	//ft_print_result(s);

	//char *s = "   ";
	//char **t = ft_split(s, ' ');
	//printf("\n\n\n\nARRAY IS READY \n\n\n\n");


	//memset_unit1();
	//memset_unit2();
	//memset_unit3();
	//ft_calloc(__SIZE_MAX__, __SIZE_MAX__);

	//char *c = ft_substr("asdf", 6, 7);
	//printf("%p\n", &c);
	//printf("%p\n", ft_substr("asdf", 6, 7));
	//printf("%s\n", ft_strtrim(NULL, NULL));
	// char **t = ft_split("", 'c');
	// int i = 0;
	// while (t[i])
	// {
	// 	printf("%s\n", t[i]);
	// 	i++;
	// }
	//printf("%s\n", ft_substr("adfhs", 4, 5));

	// t_list **t = malloc(10 * sizeof(t_list *));
	// printf("asdf\n");
	// ft_lstadd_back(t, ft_lstnew("asdf"));
	// printf("asdf2\n");
	// ft_lstadd_back(t, ft_lstnew("asdf2"));
	// printf("asdf3\n");
	// ft_lstadd_front(t, ft_lstnew("asdf2"));
	// printf("asdf4\n");
	// int i = 0;
	// while (i < ft_lstsize(*t))
	// {
	// 	printf("%s\n", (char *)((*t)->content));
	// 	*t = (*t)->next;
	// }
	// ft_lstclear(t, (void *)content_clear);
	// i = 0;
	// printf("asfasdfasdfasdfdf5\nsize = %p\n", *t);
	// while (t && i < ft_lstsize(*t))
	// {
	// 	printf("%s\n", (char *)((*t)->content));
	// 	*t = (*t)->next;
	// }
	// printf("asfasdfasdfasdfdf5\n");

	//printf("%s\n", ft_substr("", 5, 0));

	//printf("%s\n",ft_substr("test", 10, 1));
	//void *t = calloc(__SIZE_MAX__, (size_t)2);
	//void *t = ft_calloc(__SIZE_MAX__, (size_t)2);
	//free(t);
	char *d = NULL;
	char *t = malloc(2);
	printf("%lu\n%p\n", strlcat(d,t,0), d);
	printf("%lu\n%p\n", ft_strlcat(d,t,0), d);

	return (0);
}

