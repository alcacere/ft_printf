#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(char const *fmt, ...);
int	ft_isalpha(char c);
void	ft_printchar(char c, size_t *printd_cont);
void	ft_printstr(const char *str, size_t *printd_cont);
void	ft_printnbr(int n, size_t *printd_cont);
void	ft_printhex(unsigned long n, size_t *printd_cont, int hex_flag);
void	ft_printunsig(unsigned int n, size_t *printd_cont);
void	ft_printptr(void *ptr, size_t *printd_cont);

#endif
