#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(char const *fmt, ...);
void	ft_printchar(char c, size_t *printd_cont);
void	ft_printstr(const char *str, size_t *printd_cont);
void	ft_printnbr(int n, size_t *printd_cont);
void	ft_printhex(unsigned long n, size_t *printd_cont);
void	ft_printupperhex(unsigned long n, size_t *printd_cont);
void	ft_printunsig(unsigned int n, size_t *printd_cont);
void	ft_printptr(void *ptr, size_t *printd_cont);

#endif
