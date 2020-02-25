#include "includes/libft.h"

void	* ft_memcpy(void *dst, const void *src, size_t n)/*dst-sestination, src - source*/
{
printf("function\n");	
	char		*bdst;/*variable for transfer dst to bufer dst with char type, because integer wouldnt work*/
	const char 	*bsrc;
	size_t		i;

	i = 0;
	if ((src - dst) <= (long)n || dst == NULL || src == NULL)
	{
		return dst;
	}

	bdst = dst;
	bsrc = src;

	while (i < n)
	{
		bdst[i] = bsrc[i];
		printf("%d ", ((char *)dst)[i]);
		i++;
	}
	return dst;
}
