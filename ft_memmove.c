#include "includes/libft.h"
void	* ft_memmove(void *dst, const void *src, size_t n) 
{
	char		*bdst;
	const char	*bsrc;
	size_t		i;

	i=0;
	if (dst == NULL || src == NULL)
	{
		return dst;
	}
	bdst=dst;
	bsrc=src;

	while (i < n)
	{
		bdst[i] = bsrc[i];
		printf("%d ", ((char *)dst)[i]);
		i++;
	}
	return dst;

	
}

