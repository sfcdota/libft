#include "libft.h"

int		ft_strncmp(const char *s1, const char*s2, size_t n)
{
	size_t i = 0;

	while (i < n && *s1 == *s2)
		i++;
	return (i == n? 0: *s1 - *s2);
}
