#include "printf.h"
#include <stdio.h>

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[1;34m"
# define DEFAULT	"\033[0m"

int flags_avances()
{
	int ret;
	int ret2;

	printf("\n1. PRECISION & '*'\n\n");
	ret = printf("1. Test string negative precision : [%.*s]\n", -12, "Bonjour");
	ret2 = ft_printf("1. Test string negative precision : [%.*s]\n", -12, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("2. Test string negative precision : [%.*s]\n", -2, "Bonjour");
	ret2 = ft_printf("2. Test string negative precision : [%.*s]\n", -2, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("3. Test string negative precision : [%-.*s]\n", 2, "Bonjour");
	ret2 = ft_printf("3. Test string negative precision : [%-.*s]\n", 2, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("4. Test string negative precision : [%.*s]\n", 2, "Bonjour");
	ret2 = ft_printf("4. Test string negative precision : [%.*s]\n", 2, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("5. Test string negative precision : [%.*s]\n", -1, "Bonjour");
	ret2 = ft_printf("5. Test string negative precision : [%.*s]\n", -1, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("6. Test string null precision     : [%.*s]\n", 0, "Bonjour");
	ret2 = ft_printf("6. Test string null precision     : [%.*s]\n", 0, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("7. Test string positive precision : [%.*s]\n", 10, "Bonjour");
	ret2 = ft_printf("7. Test string positive precision : [%.*s]\n", 10, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	printf("\n2. TAILLE DE CHAMP MIN & '*'\n\n");
	ret = printf("8 .Test string negative width min : [%*s]\n", -12, "Bonjour");
	ret2 = ft_printf("8. Test string negative width min : [%*s]\n", -12, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("9. Test string negative width min : [%*s]\n", -2, "Bonjour");
	ret2 = ft_printf("9. Test string negative width min : [%*s]\n", -2, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("10. Test string negative width min : [%*s]\n", -1, "Bonjour");
	ret2 = ft_printf("10. Test string negative width min : [%*s]\n", -1, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("11. Test string null width min     : [%*s]\n", 0, "Bonjour");
	ret2 = ft_printf("11. Test string null width min     : [%*s]\n", 0, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("12. Test string positive width min : [%*s]\n", 2, "Bonjour");
	ret2 = ft_printf("12. Test string positive width min : [%*s]\n", 2, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("13. Test string positive width min : [%*s]\n", 10, "Bonjour");
	ret2 = ft_printf("13. Test string positive width min : [%*s]\n", 10, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	printf("\n3. TAILLE DE CHAMP MIN + PRECISION & '*'\n\n");


	ret = printf("1. Test string negative width min : [%*.*s]\n", -12, -14, "Bonjour");
	ret2 = ft_printf("1. Test string negative width min : [%*.*s]\n", -12, -14, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("2. Test string negative width min : [%*.*s]\n", -12, -12, "Bonjour");
	ret2 = ft_printf("2. Test string negative width min : [%*.*s]\n", -12, -12, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("3. Test string negative width min : [%*.*s]\n", -12, -12, "Bonjour");
	ret2 = ft_printf("3. Test string negative width min : [%*.*s]\n", -12, -2, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("4. Test string negative width min : [%*.*s]\n", -12, 0, "Bonjour");
	ret2 = ft_printf("4. Test string negative width min : [%*.*s]\n", -12, 0, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("5. Test string negative width min : [%*.*s]\n", -12, 2, "Bonjour");
	ret2 = ft_printf("5. Test string negative width min : [%*.*s]\n", -12, 2, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("6. Test string negative width min : [%*.*s]\n", -12, 12, "Bonjour");
	ret2 = ft_printf("6. Test string negative width min : [%*.*s]\n", -12, 12, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("7. Test string negative width min : [%*.*s]\n", -12, 20, "Bonjour");
	ret2 = ft_printf("7. Test string negative width min : [%*.*s]\n", -12, 20, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("8. Test string negative width min : [%*.*s]\n", -2, -10, "Bonjour");
	ret2 = ft_printf("8. Test string negative width min : [%*.*s]\n", -2, -10, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("9. Test string negative width min : [%*.*s]\n", -2, -2, "Bonjour");
	ret2 = ft_printf("9. Test string negative width min : [%*.*s]\n", -2, -2, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("10. Test string negative width min : [%*.*s]\n", -2, 1, "Bonjour");
	ret2 = ft_printf("10 .Test string negative width min : [%*.*s]\n", -2, 1, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("11. Test string negative width min : [%*.*s]\n", -2, 0, "Bonjour");
	ret2 = ft_printf("11. Test string negative width min : [%*.*s]\n", -2, 0, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("12. Test string negative width min : [%*.*s]\n", -2, 1, "Bonjour");
	ret2 = ft_printf("12. Test string negative width min : [%*.*s]\n", -2, 1, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("13. Test string negative width min : [%*.*s]\n", -2, 10, "Bonjour");
	ret2 = ft_printf("13. Test string negative width min : [%*.*s]\n", -2, 10, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("14. Test string null width min     : [%*.*s]\n", 0, -3, "Bonjour");
	ret2 = ft_printf("14. Test string null width min     : [%*.*s]\n", 0, -3, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("15. Test string null width min     : [%*.*s]\n", 0, 0, "Bonjour");
	ret2 = ft_printf("15. Test string null width min     : [%*.*s]\n", 0, 0, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("16. Test string null width min     : [%*.*s]\n", 0, 4, "Bonjour");
	ret2 = ft_printf("16. Test string null width min     : [%*.*s]\n", 0, 4, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string null width min     : [%*.*s]\n", 0, 10, "Bonjour");
	ret2 = ft_printf("Test string null width min     : [%*.*s]\n", 0, 10, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string positive width min : [%*.*s]\n", 2, -10, "Bonjour");
	ret2 = ft_printf("Test string positive width min : [%*.*s]\n", 2, -10, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string positive width min : [%*.*s]\n", 2, -2, "Bonjour");
	ret2 = ft_printf("Test string positive width min : [%*.*s]\n", 2, -2, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string positive width min : [%*.*s]\n", 2, -1, "Bonjour");
	ret2 = ft_printf("Test string positive width min : [%*.*s]\n", 2, -1, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string positive width min : [%*.*s]\n", 2, 0, "Bonjour");
	ret2 = ft_printf("Test string positive width min : [%*.*s]\n", 2, 0, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string positive width min : [%*.*s]\n", 2, 1, "Bonjour");
	ret2 = ft_printf("Test string positive width min : [%*.*s]\n", 2, 1, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string positive width min : [%*.*s]\n", 2, 10, "Bonjour");
	ret2 = ft_printf("Test string positive width min : [%*.*s]\n", 2, 10, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string positive width min : [%*.*s]\n", 10, -12, "Bonjour");
	ret2 = ft_printf("Test string positive width min : [%*.*s]\n", 10, -12, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string positive width min : [%*.*s]\n", 10, -10, "Bonjour");
	ret2 = ft_printf("Test string positive width min : [%*.*s]\n", 10, -10, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string positive width min : [%*.*s]\n", 10, -1, "Bonjour");
	ret2 = ft_printf("Test string positive width min : [%*.*s]\n", 10, -1, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string positive width min : [%*.*s]\n", 10, 0, "Bonjour");
	ret2 = ft_printf("Test string positive width min : [%*.*s]\n", 10, 0, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string positive width min : [%*.*s]\n", 10, 4, "Bonjour");
	ret2 = ft_printf("Test string positive width min : [%*.*s]\n", 10, 4, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test string positive width min : [%*.*s]\n", 10, 12, "Bonjour");
	ret2 = ft_printf("Test string positive width min : [%*.*s]\n", 10, 12, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("[%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d]\n", -1, 3, 8, -1, 3, -12, -1, 3, 123456789, -1, -3, 0, -1, 3, -12345678, -1 , 3, 'a', -1, 3, -2147483648, -1, 3, 2147483647);
	ret2 = ft_printf("[%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d]\n", -1, 3, 8, -1, 3, -12, -1, 3, 123456789, -1, -3, 0, -1, 3, -12345678, -1 , 3, 'a', -1, 3, -2147483648, -1, 3, 2147483647);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("[%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d]\n", -2, 0, 8, -2, 0, -12, -2, 0, 123456789, -2, 0, 0, -2, 0, -12345678, -2, 0, 'a', -2, 0, -2147483648, -2, 0, 2147483647);
	ret2 = ft_printf("[%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d]\n", -2, 0, 8, -2, 0, -12, -2, 0, 123456789, -2, 0, 0, -2, 0, -12345678, -2 , 0, 'a', -2, 0, -2147483648, -2, 0, 2147483647);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	
	return (0);
}
