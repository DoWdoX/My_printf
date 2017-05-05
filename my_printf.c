/*
** printf.c for printf.c in /home/DoWdoX/printf
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Tue Nov 15 10:17:27 2016 DORIAN DEBOUT
** Last update Wed Nov 16 15:38:16 2016 DORIAN DEBOUT
*/

#include "./include/my.h"

int	mod_d_i_c_u(char *str, int i, va_list ap)
{
  if (str[i + 1] == 'd' || str[i + 1] == 'i')
    my_put_nbr(va_arg(ap, int));
  if (str[i + 1] == 'c')
    my_putchar(va_arg(ap, int));
  if (str[i + 1] == 'u')
    my_put_nbr_u(va_arg(ap, int));
  return (i);
}

int	mod_o_s_S_b(char *str, int i, va_list ap)
{
  if (str[i + 1] == 's')
    my_putstr(va_arg(ap, char*));
  if (str[i + 1] == 'S')
    my_printf_S(va_arg(ap, char*));
  if (str[i + 1] == 'o')
    octal(va_arg(ap, int), 8);
  if (str[i + 1] == 'b')
    binaire(va_arg(ap, int), 2);
  return (i);
}

int	mod_hd_ld(char *str, int i, va_list ap)
{
  if (str[i + 1] == 'h' && str[i + 2] == 'd')
    my_put_nbr_hd(va_arg(ap, int));
  if (str[i + 1] == 'l' && str[i + 2] == 'd')
    my_put_nbr_ld(va_arg(ap, int));
  if (str[i + 1] == 'b')
    binaire(va_arg(ap, int), 2);
  i = i + 1;
  return (i);
}

int             my_printf(char *str, ...)
{
  va_list       ap;
  int           i;

  i = 0;
  va_start(ap, str);
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  if (str[i + 1] == 'd' || str[i + 1] == 'i'
	      || str[i + 1] == 'c' || str[i + 1] == 'u')
	    mod_d_i_c_u(str, i, ap);
	  if (str[i + 1] == 'o' || str[i + 1] == 's'
	      || str[i + 1] == 'S' || str[i + 1] == 'b')
	    mod_o_s_S_b(str, i, ap);
	  if (str[i + 1] == 'h' || str[i + 1] == 'l' && str[i + 2] == 'd')
	    i = mod_hd_ld(str, i, ap);
	  i = i + 1;
	}
      else
	my_putchar(str[i]);
      i = i + 1;
    }
}
