#include "ft_printf.h"

int main()
{
	char c = 'a';
	char *s = NULL;
	int n = 25;
	int hex = 1287423964;
	int u = -21474836479;
	char *p = NULL;
	

	int ret = 0;
	ret += ft_printf("caracter: %c\n", c);
	ret += ft_printf("string: %s\n", s);
	ret += ft_printf("integer: %i\n", n);
	ret += ft_printf("hexadecimal: %x\n", hex);
	ret += ft_printf("hexadecimal mayuscula: %X\n", hex);
	ret += ft_printf("unsigned: %u\n", u);
	ret += ft_printf("puntero: %p\n", p);
	ft_printf("se imprimieron: %i caracteres\n", ret);
	ft_printf("%");
	int p_ret = 0;
	p_ret += printf("caracter: %c\n", c);
	p_ret += printf("string: %s\n", s);
	p_ret += printf("integer: %i\n", n);
	p_ret += printf("hexadecimal: %x\n", hex);
	p_ret += printf("hexadecimal mayuscula: %X\n", hex);
	p_ret += printf("unsigned: %u\n", u);
	p_ret += printf("puntero: %p\n", p);
	printf("se escribieron: %i caracteres\n", p_ret);
	ft_printf("%");
}
