#include "printf.h"
#include "libft.h"
#include <stdio.h>

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[1;34m"
# define DEFAULT	"\033[0m"

int soyons_fou()
{
	char *s = "Hello";
	int ret;
	int ret2;

	printf("\n1. MELI MELO\n\n");

	ret = printf("Test int negative : [%*.*s]\n", 10, 4, "Bonjour");
	ret2 = ft_printf("Test int negative : [%*.*s]\n", 10, 4, "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	
	printf("---- Printf ----\n");
	printf("Test string         : [%-*.*s]\n", 20, 10, "Bonjour");
	printf("Test char           : [%*.c]\n", 4,'B');
	printf("Test integer        : [%020.*d]\n", 10, -2637);
	printf("Test unsigned int   : [%-30.*u]\n", 6, 2637);
	printf("Test pointer        : [%-20.p]\n", s);
	printf("Test hexadecimal    : [%020.*x]\n", 10, -2637);
	printf("Test HEXADECIMAL    : [%-20.*X]\n", 6, -2637);
	printf("Test pourcentage    : [%%]\n\n");
	printf("\n---- Ft_Printf ----\n");
	ft_printf("Test string          : [%-*.*s]\n", 20, 10, "Bonjour");
	ft_printf("Test char            : [%*.c]\n", 4, 'B');
	ft_printf("Test integer         : [%020.*d]\n", 10, -2637);
	ft_printf("Test unsigned int    : [%-30.*u]\n", 6, 2637);
	ft_printf("Test pointer         : [%-20.p]\n", s);
	ft_printf("Test hexadecimal     : [%020.*x]\n", 10, -2637);
	ft_printf("Test HEXADECIMAL     : [%-20.*X]\n", 6, -2637);
	ft_printf("Test pourcentage     : [%%]\n\n");
	printf("\n1. MELI MELO DOUBLONS\n\n");
	printf("---- Printf ----\n");
	printf("Test string         : [%-----*.*s]\n", -20, -0, "Bonjour");
	printf("Test char           : [%*.c]\n", 4,'B');
	printf("Test integer        : [%00000000020.*d]\n", 10, -2637);
	printf("Test unsigned int   : [%-30.*u]\n", 6, 2637);
	printf("Test pointer        : [%-20.p]\n", s);
	printf("Test hexadecimal    : [%00.*x]\n", 10, -2637);
	printf("Test HEXADECIMAL    : [%-20.*X]\n", 6, -2637);
	printf("Test pourcentage    : [%%]\n\n");
	printf("\n---- Ft_Printf ----\n");
	ft_printf("Test string          : [%-----*.*s]\n", -20, -0, "Bonjour");
	ft_printf("Test char            : [%*.c]\n", 4, 'B');
	ft_printf("Test integer         : [%00000000020.*d]\n", 10, -2637);
	ft_printf("Test unsigned int    : [%-30.*u]\n", 6, 2637);
	ft_printf("Test pointer         : [%-20.p]\n", s);
	ft_printf("Test hexadecimal     : [%00.*x]\n", 10, -2637);
	ft_printf("Test HEXADECIMAL     : [%-20.*X]\n", 6, -2637);
	ft_printf("Test pourcentage     : [%%]\n\n");
	return (0);
}
