#include <stdio.h> // <...> => import file from compiler
#include "libft.h"
//#include "~/42/.../ft_isalnum.c" => import file from local

//int	ft_isalpha(int a);

int	main(void)
{
	printf("A => %d\n", ft_isalnum('A'));
	printf("a => %d\n", ft_isalnum('a'));
	printf("0 => %d\n", ft_isalnum('0'));
	printf("9 => %d\n", ft_isalnum('9'));
	printf("/ => %d\n", ft_isalnum('/'));
	printf("\n");
	return (0);
}
