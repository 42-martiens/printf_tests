#include "printf.h"
#include <stdio.h>

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[1;34m"
# define DEFAULT	"\033[0m"

int		bonus()
{
	int ret;
	int ret2;
	int number;
	int *n1;
	int *n2;

	printf("\n           f l a g s  b o n u s\n");
	printf("\n1. FLAG #\n\n");
	ret = printf("1. Test #x : [%#x]\n", 0);
	ret2 = ft_printf("1. Test #x : [%#x]\n", 0);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("2. Test #-4.x : [%#-4.x]\n", 0);
	ret2 = ft_printf("2. Test #-4.x : [%#-4.x]\n", 0);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("3. Test #-4.2x : [%#-4.2x]\n", 0);
	ret2 = ft_printf("3. Test #-4.2x : [%#-4.2x]\n", 0);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("4. Test 4.3x : [%4.3x]\n", 9);
	ret2 = ft_printf("4. Test 4.3x : [%4.3x]\n", 9);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("4. Test #4.3x : [%#4.3x]\n", 9);
	ret2 = ft_printf("4. Test #4.3x : [%#4.3x]\n", 9);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("4.2 Test #-7.3x : [%#-7.3x]\n", 9);
	ret2 = ft_printf("4.2 Test #-7.3x : [%#-7.3x]\n", 9);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("5. Test -6.3x : [%-6.3x]\n", 9);
	ret2 = ft_printf("5. Test -6.3x : [%-6.3x]\n", 9);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("6. Test #-4.3x : [%#-4.3x]\n", 878959949);
	ret2 = ft_printf("6. Test #-4.3x : [%#-4.3x]\n", 878959949);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	
	ret = printf("6. Test #04x : [%#04x]\n", 19);
	ret2 = ft_printf("6. Test #04x : [%#04x]\n", 19);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("6. Test #04x : [%#04x]\n", 13);
	ret2 = ft_printf("6. Test #04x : [%#04x]\n", 13);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	
	printf("\n2. FLAG ' '\n\n");
	ret = printf("6. Test [ 04d] : [% 04d]\n", 198);
	ret2 = ft_printf("6. Test [ 04d] : [% 04d]\n", 198);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("6. Test [ -4.d] : [% -4.d]\n", -135);
	ret2 = ft_printf("6. Test [ -4.d] : [% -4.d]\n", -135);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("6. Test [ -4.*d] : [% -4.*d]\n", 4, -135);
	ret2 = ft_printf("6. Test [ -4.*d] : [% -4.*d]\n", 4, -135);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	printf("\n2. FLAG + \n\n");

	ret = printf("6. Test [+04d] : [%+04d]\n", 198);
	ret2 = ft_printf("6. Test [+04d] : [%+04d]\n", 198);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("6. Test [+-4.*d] : [%+-4.*d]\n", -4, -12);
	ret2 = ft_printf("6. Test [+-4.*d] : [%+-4.*d]\n", -4, -12);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("6. Test [+-4.*d] : [%+-4.*d]\n", 4, -12);
	ret2 = ft_printf("6. Test [+-4.*d] : [%+-4.*d]\n", 4, -12);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("6. Test [+-4.*d] : [%+-4.*d]\n", 4, 12);
	ret2 = ft_printf("6. Test [+-4.*d] : [%+-4.*d]\n", 4, 12);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	printf("\n           c o n v e r s i o n s  b o n u s\n");

	printf("\n2. CONVERSION N \n\n");

	ret = ft_printf("6. Test [n] : [%n]\n", n1);
	return (0);
}
