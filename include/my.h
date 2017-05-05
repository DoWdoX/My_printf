/*
** my.h for my_h in /home/clement/Piscine/CPool_Day09/include
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Thu Oct 13 09:16:07 2016 clement girard
** Last update Wed Nov 16 13:40:10 2016 DORIAN DEBOUT
*/

#ifndef _MY_H
# define _MY_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void    my_putchar(char c);
int     my_putstr(char *str);
int     my_printf_int(char *str, ...);
int     my_printf_str(char *str, ...);
int     aff_int(int nb, ...);
char    *aff_str(int nb, ...);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_strlen(char *str);
int	my_getnbr(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_power_rec(int nb, int power);
int	my_square_root(int nb);
int	my_is_prime(int nb);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char *to_find);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_islower(char *str);
int	my_str_isupper(char *str);
int	my_str_isprintable(char *str);
int	my_showstr(char *str);
int	my_showmem(char *str, int size);
char	*my_strcat(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int nb);
int	binaire(int nb, int div);
int	my_printf_char(char *str, ...);
int	my_printf_S(char *str, ...);
int	octal(int nb, int div);
int	my_printf_u_int(char *str, ...);
int	my_printf_short(char *str, ...);
int	my_printf_long(char *str, ...);
int	my_put_nbr_u(unsigned int nb);
int	my_put_nbr_hd(short int nb);
int	my_put_nbr_ld(long int nb);

#endif
