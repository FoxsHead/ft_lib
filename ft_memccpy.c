#include "includes/libft.h"
void	* ft_memccpy(void *dst, const void *src, int c, size_t n) 
{
	char		*bdst;
	const char	*bsrc;
	size_t		i;

	i=0;
	if ((src - dst) <= (long)n || dst == NULL || src == NULL)
	{
		return dst;
	}
	bdst = dst;
	bsrc = src;

	while ((i < n) && (bsrc[i] != c))
	{
		bdst[i] = bsrc[i];
		printf("%d ", ((char *)dst)[i]);
		i++;
	}
	return dst;
}
