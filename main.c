#include "includes/libft.h"
void	print_bytes (void * data, size_t len)
{
	char *bdata;
	bdata = data;
	size_t i;
	i = 0;
	while (i < len)
	{
		printf("%d ", bdata[i]);
		i++;
	}
	printf ("\n");
}

int	main(void)
{
	char	test[] = "1234567890";
	char	test1[10];

	printf("%s\n", test);
	
	ft_memset((void *)test, 65, 5);
	printf("%s\n", test);

	ft_bzero((void *)test, 3);
	print_bytes(test, 10);

	ft_memset((void *)test1, 66, 10);
	print_bytes (test1, 10);
	ft_memcpy((void *)test, (void *)test1, 9);
	print_bytes (test, 10);
	return 0;
}
