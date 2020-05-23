#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;

	/* Copy as many bytes as will fit */
	if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
	}

	/* Not enough room in dst, add NUL and traverse rest of src */
	if (n == 0) {
		if (siz != 0)
			*d = '\0';		/* NUL-terminate dst */
		while (*s++)
			;
	}

	return(s - src - 1);	/* count does not include NUL */
}

size_t	strlcat(char *dst, const char *src, size_t dsize)
{
	const char *odst = dst;
	const char *osrc = src;
	size_t n = dsize;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end. */
	while (n-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - odst;
	n = dsize - dlen;

	if (n-- == 0)
		return(dlen + strlen(src));
	while (*src != '\0') {
		if (n != 0) {
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';

	return(dlen + (src - osrc));	/* count does not include NUL */
}

void ft_strlcat_test1()
{
	char *dst1 = "malloc(20)";
	char *dst2 = "malloc(20)";
	char *src = "privet poka";
	size_t t = 5;
	if (ft_strlcat(dst1, src, t) == strlcat(dst2, src, t) && strcmp(dst1, dst2) == 0)
		printf("correct test with %s %li\n", src, t);
}

void ft_strlcat_test()
{
	ft_strlcat_test1();
}




int main()
{
	printf("%c\n", *(unsigned char *)"\200");
	printf("%d\n", ft_strncmp("\202", "\0", 6));
	printf("\48\n, %d\n", '\177'-'\0');
	return (0);
}


