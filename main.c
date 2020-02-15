#include "ftlib.h"

int	main(void)
{
	char	test[] = "1234567890";
	printf("%s\n", test);
	
	ft_memset((void *)test, 65, 5);
	printf("%s\n", test);
	return 0;
}
