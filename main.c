#include "printf.h"
#include "libft.h"
#include <stdio.h>

int conversion_simple(void);
int flags_simples(void);
int flags_avances(void);
int soyons_fou(void);
int	bonus(void);

int main(int ac, char **av)
{
	if (ac == 1)
	{
		printf("\n           P A R T I E  O B L I G A T O I R E\n");
		printf("\n           c o n v e r s i o n  s i m p l e\n");
		conversion_simple();
		printf("\n           f l a g s  s i m p l e s\n");
		flags_simples();
		printf("\n           f l a g s  a v a n c e s\n");
		flags_avances();
		printf("\n           s o y o n s  f o u s\n");
		soyons_fou();
		printf("\n           P A R T I E  B O N U S\n");
		bonus();
	}
	if (ac == 2 && ft_atoi(av[1]) == 1)
	{
		printf("\n           c o n v e r s i o n  s i m p l e\n");
		conversion_simple();
	}
	else if (ac == 2 && ft_atoi(av[1]) == 2)
	{
		printf("\n           f l a g s  s i m p l e s\n");
		flags_simples();
	}
	else if (ac == 2 && ft_atoi(av[1]) == 3)
	{
		printf("\n           f l a g s  a v a n c e s\n");
		flags_avances();
	}
	else if (ac == 2 && ft_atoi(av[1]) == 4)
	{
		printf("\n           s o y o n s  f o u s\n");
		soyons_fou();
	}
	return (0);
}
