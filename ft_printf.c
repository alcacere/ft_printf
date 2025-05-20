#include "libftprintf.h"

void	fmt_id(char const *fmt, va_list ap, int *printd_cont)
{
	while ()
}

int	ft_printf(char const *fmt, ...)
{
	int	printd_cont;
	int	i;
	va_list ap;

	i = 0;
	printd_cont = 0;
	va_start(ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == %)
			fmt_id(fmt[i + 1], ap, &printd_cont);
	}
	va_end(ap);
	return (printd_cont);
}
