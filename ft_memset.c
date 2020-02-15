#include "includes/libft.h"

void	* ft_memset (void * ptr, int value, size_t num)
{
	char	*buf;
	size_t	i;

	i = 0;
	buf = ptr;
	while (i < num)
	{
       		buf[i] = value;
        	i++;
	}
	return ptr;	
}
