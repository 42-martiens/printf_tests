#include "printf.h"
#include <stdio.h>

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[1;34m"
# define DEFAULT	"\033[0m"
# define INT_MIN	-2147483648

int conversion_simple()
{
	int ret;
	int ret2;
	char *str = "test";
	char *ptr;

	ptr = 0;
	printf("\n1. CONVERSIONS SIMPLES\n\n");
	ret =  printf("Test string : [%s]\n", "Bonjour");
	ret2 =  ft_printf("Test string : [%s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test pointeur : [%p]\n", str);
	ret2 =  ft_printf("Test pointeur : [%p]\n", str);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test char : [%c]\n", 'a');
	ret2 =  ft_printf("Test char : [%c]\n", 'a');
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test hexa : [%x]\n", 3959);
	ret2 =  ft_printf("Test hexa : [%x]\n", 3959);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);


	ret =  printf("Test HEXA : [%X]\n", -3959);
	ret2 =  ft_printf("Test HEXA : [%X]\n", -3959);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);


	ret =  printf("Test int d : [%d]\n", -3959);
	ret2 =  ft_printf("Test int d : [%d]\n", -3959);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);


	ret =  printf("Test int i : [%d]\n", 959);
	ret2 =  ft_printf("Test int i : [%d]\n", 959);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);


	ret =  printf("Test unsigned : [%u]\n", 959);
	ret2 =  ft_printf("Test unsigned : [%u]\n", 959);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test percent : [%%]\n");
	ret2 =  ft_printf("Test percent : [%%]\n");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	
	printf("\n1. CAS SPECIAUX\n\n");
	
	ret =  printf("Test string : [%s]\n", ptr);
	ret2 =  ft_printf("Test string : [%s]\n", ptr);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test pointeur : [%p]\n", ptr);
	ret2 =  ft_printf("Test pointeur : [%p]\n", ptr);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test char : [%c]\n", 0);
	ret2 =  ft_printf("Test char : [%c]\n", 0);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test hexa : [%x]\n", 0);
	ret2 =  ft_printf("Test hexa : [%x]\n", 0);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);


	ret =  printf("Test HEXA : [%X]\n", 0);
	ret2 =  ft_printf("Test HEXA : [%X]\n", 0);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);


	ret =  printf("Test int d : [%d]\n", 0);
	ret2 =  ft_printf("Test int d : [%d]\n", 0);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);


	ret =  printf("Test int i : [%i]\n", -0);
	ret2 =  ft_printf("Test int i : [%i]\n", -0);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);


	ret =  printf("Test unsigned : [%u]\n", 0);
	ret2 =  ft_printf("Test unsigned : [%u]\n", 0);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test percent : [%%]\n");
	ret2 =  ft_printf("Test percent : [%%]\n");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	return (0);
}
