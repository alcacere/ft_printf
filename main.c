#include "libftprintf.h"

int main()
{
        char c = 'a';
		char *s = "hola que tal";
		int n = 25;
		int hex = 1287423964;
		unsigned int u = -21474836479;
		char *p = "hola";
		int ret = ft_printf("esto es un caracter: %c\nesto es un string: %s\nesto es un entero: %i\n", c, s, n);
		ret += ft_printf("esto es un hexadecimal: %x\n", hex);
		ret += ft_printf("esto es un hexadecimal mayuscula: %X\n", hex);
		ret += ft_printf("esto es un entero sin signo: %u\n", u);
		ret += ft_printf("esta es la direccion de un puntero: %p\n", p);
		printf("length: %i\n%u\n%p\n", ret, u, p);
}

