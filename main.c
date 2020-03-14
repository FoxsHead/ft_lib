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

	printf ("testing memset\n");
	printf ("test1=");
	print_bytes(test1, 10);
	ft_memset((void *)test1, 65, 5);
	printf ("test1+memset first 5 with 65=");
	print_bytes(test1, 10);

	printf ("testing bzero\n");
	printf("test1=");
	print_bytes(test1, 10);
	printf("test=");
	print_bytes(test, 10);

	ft_bzero((void *)test1, 10);
	ft_bzero((void *)test, 3);
	printf("test1+bzero first 10=");
	print_bytes(test1, 10);
	printf("test+bzero first 3=");
	print_bytes(test, 10);

	printf ("testing memcpy\n");
	ft_bzero((void *)test1, 10);
	ft_memset((void *)test1, 66, 10);
	print_bytes (test1, 10);
	ft_memcpy((void *)test, (void *)test1, 9);
	print_bytes (test, 10);

	/*memccpy test */
	printf ("testing memccpy\n");
	print_bytes(test, 10);
	print_bytes(test1, 10);
	ft_bzero((void *)test1, 10);
	void * result;
	result = ft_memccpy((void *)test1, (void *)&(test[3]), 54, 5);
	print_bytes(test1, 10);
	print_bytes(result, 5);
	result = result - 3;
	print_bytes(result, 5);

	/*memmove test */
	printf ("testing memmove\n");
	ft_bzero((void *)test1, 10);
	ft_memmove(&test[5], &test[1], 3);
	print_bytes (test, 10);
	return 0;
}
