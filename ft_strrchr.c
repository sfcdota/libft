#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char *t;

	t = NULL;
	while (*s)
	{
		if (*s == c)
			t = s;
		s++;
	}
	if (!c)
		return (s);
	return (t);
}
