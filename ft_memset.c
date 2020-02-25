#include "includes/libft.h"

void	* ft_memset (void * ptr, int value, size_t num)
{
	char	*buf;/*needed for converting void to char because char=1 byte, void doesn't have type*/
	size_t	i;
	i = 0;
	if (ptr == NULL)/*protection from NULL in ptr from user*/
	{
		return ptr;
	}
	if (value > 255) /*protection from value > 255, because for example 265 gives 9 etc.*/
	{
		return ptr;
	}
	buf = ptr;/*converting void to char for working with 'while' cycle*/
	while (i < num)
	{
       		buf[i] = (unsigned char)value;
        	i++;
	}
	return ptr;	
}
