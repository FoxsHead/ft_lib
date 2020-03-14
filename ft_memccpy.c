#include "includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n) 
{
	unsigned char	*bdst;
	const char		*bsrc;
	size_t			i;

	i = 0;
	if (/*(src - dst) > (long)n || */dst == NULL || src == NULL)
	{
		return dst;
	}
	bdst = dst;
	bsrc = src;

	while (i < n)
	{
		bdst[i] = bsrc[i];
		printf("%d\n", ((char *)dst)[i]);
		if (bsrc[i] == c)
		{
			return &dst[i+1];
		}
		i++;
	}
	return (NULL);
}
