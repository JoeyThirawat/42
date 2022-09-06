#include <stdio.h> // <...> => import file from compiler
#include "libft.h"
//#include "~/42/.../ft_isalnum.c" => import file from local

//int	ft_isalpha(int a);

int	main(void)
{
	printf("A => %d\n", ft_isascii('A'));
	printf("a => %d\n", ft_isascii('a'));
	printf("0 => %d\n", ft_isascii('0'));
	printf("9 => %d\n", ft_isascii('9'));
	printf("/ => %d\n", ft_isascii('/'));
	printf("- => %d\n", ft_isascii('-'));
	printf("+ => %d\n", ft_isascii('+'));
	printf("= => %d\n", ft_isascii('='));
	printf("  => %d\n", ft_isascii(' '));
	printf("_ => %d\n", ft_isascii('_'));
	//printf("\n => %d\n", ft_isascii("\n"));
	printf("\n");
	return (0);
}
