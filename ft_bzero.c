include "includes/libft.h"

void	* ft_bzero (void * s, size_t num)
{
	char *buf;
	size_t i;

	i = 0;
	if (s == NULL)
	{
		return s;
	}
	buf = s;
	while (i < num)
	{
		buf[i++] = 0;
	}
	return s;
}
