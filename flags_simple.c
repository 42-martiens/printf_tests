#include "printf.h"
#include "libft.h"
#include <stdio.h>


# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[1;34m"
# define DEFAULT	"\033[0m"

void		taille_min()
{
	int ret;
	int ret2;

	ret = printf("1. Test string smaller min width : [%1s]\n", "Bonjour");
	ret2 = ft_printf("1. Test string smaller min width : [%1s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	
	ret = printf("2. Test string smaller min width : [%2s]\n", "Bonjour");
	ret2 = ft_printf("2. Test string smaller min width : [%2s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	
	ret = printf("3. Test string smaller min width : [%3s]\n", "Bonjour");
	ret2 = ft_printf("3. Test string smaller min width : [%3s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	
	ret = printf("4. Test string equal min width   : [%7s]\n", "Bonjour");
	ret2 = ft_printf("4. Test string equal min width   : [%7s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	
	ret = printf("5. Test string longer min width  : [%8s]\n", "Bonjour");
	ret2 = ft_printf("5. Test string longer min width  : [%8s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	
	ret = printf("6. Test string longer min width  : [%9s]\n", "Bonjour");
	ret2 = ft_printf("6. Test string longer min width  : [%9s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	
	ret = printf("7. Test string longer min width  : [%12s]\n", "Bonjour");
	ret2 = ft_printf("7. Test string longer min width  : [%12s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
}


void	taille_min_minus()
{

	int ret;
	int ret2;

	ret = printf("Test string smaller min width : [%-s]\n", "Bonjour");
	ret2 = ft_printf("Test string smaller min width : [%-s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test string smaller min width : [%-1s]\n", "Bonjour");
	ret2 = ft_printf("Test string smaller min width : [%-1s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test string smaller min width : [%-2s]\n", "Bonjour");
	ret2 = ft_printf("Test string smaller min width : [%-2s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test string smaller min width : [%-3s]\n", "Bonjour");
	ret2 = ft_printf("Test string smaller min width : [%-3s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test string equal min width   : [%-7s]\n", "Bonjour");
	ret2 = ft_printf("Test string equal min width   : [%-7s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test string longer min width  : [%-8s]\n", "Bonjour");
	ret2 = ft_printf("Test string longer min width  : [%-8s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test string longer min width  : [%-9s]\n", "Bonjour");
	ret2 = ft_printf("Test string longer min width  : [%-9s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test string longer min width  : [%-12s]\n", "Bonjour");
	ret2 = ft_printf("Test string longer min width  : [%-12s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);	
}
int flags_simples()
{
	int ret;
	int ret2;
	char *ptr;
	char *str = "Hello";

	ptr = 0;
	printf("\n1. TAILLE DE CHAMP MINIMAL\n\n");
	taille_min();

	printf("\n2. TAILLE DE CHAMP MINIMAL & '-'\n\n");
	taille_min_minus();

	printf("\n3. TAILLE DE CHAMP MINIMAL & '0'\n\n");
	ret =  printf("Test string smaller min width : [%s]\n", "Bonjour");
	ret2 =  ft_printf("Test string smaller min width : [%s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test string smaller min width : [%1s]\n", "Bonjour");
	ret2 =  ft_printf("Test string smaller min width : [%1s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test string smaller min width : [%2s]\n", "Bonjour");
	ret2 =  ft_printf("Test string smaller min width : [%2s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test string smaller min width : [%3s]\n", "Bonjour");
	ret2 =  ft_printf("Test string smaller min width : [%3s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test string equal min width   : [%7s]\n", "Bonjour");
	ret2 =  ft_printf("Test string equal min width   : [%7s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test string longer min width  : [%8s]\n", "Bonjour");
	ret2 =  ft_printf("Test string longer min width  : [%8s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test string longer min width  : [%9s]\n", "Bonjour"); 
	ret2 =  ft_printf("Test string longer min width  : [%9s]\n", "Bonjour"); 
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret =  printf("Test string longer min width  : [%12s]\n", "Bonjour");
	ret2 =  ft_printf("Test string longer min width  : [%12s]\n", "Bonjour");
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);







	ret = printf("Test decimal smaller min width : [%0d]\n", -1345);
	ret2 = ft_printf("Test decimal smaller min width : [%0d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test decimal smaller min width : [%01d]\n", -1345);
	ret2 = ft_printf("Test decimal smaller min width : [%01d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test decimal smaller min width : [%02d]\n", -1345);
	ret2 = ft_printf("Test decimal smaller min width : [%02d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test decimal smaller min width : [%03d]\n", -1345);
	ret2 = ft_printf("Test decimal smaller min width : [%03d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test decimal equal min width 05.2d : [%05.2d]\n", -1345);
	ret2 = ft_printf("Test decimal equal min width 05.2d : [%05.2d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test decimal equal min width 02.3d : [%02.d]\n", 0);
	ret2 = ft_printf("Test decimal equal min width 02.3d : [%02.d]\n", 0);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test decimal equal min width 07.2d : [%07.2d]\n", -1345);
	ret2 = ft_printf("Test decimal equal min width 07.2d : [%07.2d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test decimal equal min width 07.10d : [%07.10d]\n", -1345);
	ret2 = ft_printf("Test decimal equal min width 07.10d : [%07.10d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test decimal equal min width 010.7d : [%010.7d]\n", -1345);
	ret2 = ft_printf("Test decimal equal min width 010.7d : [%010.7d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	ret = printf("Test decimal equal min width 07d : [%07d]\n", -1345);
	ret2 = ft_printf("Test decimal equal min width 07d : [%07d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test decimal longer min width 08d : [%08d]\n", -1345);
	ret2 = ft_printf("Test decimal longer min width 08d : [%08d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test decimal longer min width 09d : [%09d]\n", -1345);
	ret2 = ft_printf("Test decimal longer min width 09d : [%09d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test decimal longer min width 012d : [%012d]\n", -1345);
	ret2 = ft_printf("Test decimal longer min width 012d : [%012d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("Test decimal longer min width 12d : [%12d]\n", -1345);
	ret2 = ft_printf("Test decimal longer min width 12d : [%12d]\n", -1345);
	if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	printf("\n4. PRECISION\n\n");
	ret = printf("1. Test string smaller min width : [%.s]\n", "Bonjour");
	ret2 = ft_printf("1. Test string smaller min width : [%.s]\n", "Bonjour");
		if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("2. Test string smaller min width : [%.1s]\n", "Bonjour");
	ret2 = ft_printf("2. Test string smaller min width : [%.1s]\n", "Bonjour");
		if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("3. Test string smaller min width : [%.2s]\n", "Bonjour");
	ret2 = ft_printf("3. Test string smaller min width : [%.2s]\n", "Bonjour");
		if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("4. Test string smaller min width : [%.3s]\n", "Bonjour");
	ret2 = ft_printf("4. Test string smaller min width : [%.3s]\n", "Bonjour");
		if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("5. Test string equal min width   : [%.7s]\n", "Bonjour");
	ret2 = ft_printf("5. Test string equal min width   : [%.7s]\n", "Bonjour");
		if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("6. Test string longer min width  : [%.8s]\n", "Bonjour");
	ret2 = ft_printf("6. Test string longer min width  : [%.8s]\n", "Bonjour");
		if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("7. Test string longer min width  : [%.9s]\n", "Bonjour");
	ret2 = ft_printf("7. Test string longer min width  : [%.9s]\n", "Bonjour");
		if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("8. Test string longer min width  : [%.12s]\n", "Bonjour");
	ret2 = ft_printf("8. Test string longer min width  : [%.12s]\n", "Bonjour");
		if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("9. Test pointeur : [%-15p]\n", str);
	ret2 = ft_printf("9. Test pointeur : [%-15p]\n", str);
		if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("9. Test pointeur : [%-15p]\n", ptr);
	ret2 = ft_printf("9. Test pointeur : [%-15p]\n", ptr);
		if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);

	ret = printf("10. Test pointeur : [%-16.p]\n", str);
	ret2 = ft_printf("10. Test pointeur : [%-16.p]\n", str);
		if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);


	ret = printf("11. Test pointeur : [%-16.p]\n", ptr);
	ret2 = ft_printf("11. Test pointeur : [%-16.p]\n", ptr);
		if (ret == ret2)
		printf("   %s%s%s", GREEN, "OK\n", DEFAULT);
	else
		printf("printf = %d\nft_printf = %d\n%s%s%s", ret, ret2, RED, " KO\n", DEFAULT);
	
	return (0);
}
