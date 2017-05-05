/*
** mod_S.c for mod_S.c in /home/DoWdoX/printf
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Wed Nov  9 09:47:25 2016 DORIAN DEBOUT
** Last update Wed Nov 16 15:39:21 2016 DORIAN DEBOUT
*/

#include "./include/my.h"

int     aff_slash(int i, int j)
{
  my_putchar('\\');
  j = i;
  while (j < 3)
    {
      my_putchar('0');
      j = j + 1;
    }
}

int     S_octal(int nb, int div)
{
  int   modulo;
  int   i;
  int   j;
  int   array[i];

  while (div <= nb)
    {
      modulo = nb % div;
      nb = nb / div;
      i = i + 1;
      array[i] = modulo;
    }
  if (nb != 0 && nb < 10)
    {
      modulo = nb % div;
      i = i + 1;
      array[i] = modulo;
    }
  aff_slash(i, j);
  while (i > 0)
    {
      my_put_nbr(array[i]);
      i = i - 1;
    }
  return (0);
}

int	my_putstr_custom(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	 S_octal(str[i], 8);
	  i = i + 1;
	}
      my_putchar(str[i]);
      i = i + 1;
    }
}

int             my_printf_S(char *str, ...)
{
  va_list       ap;
  char          *str2;
  int           i;
  int           nb;
  int		j;

  j = 0;
  nb = 1;
  i = 0;
  va_start(ap, str);
  while (str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
      if (str[i] == '%' && str[i + 1] == 'S')
	{
	  str2 = va_arg(ap, char*);
	  my_putstr_custom(str2);
	  i = i + 2;
	  nb = nb + 1;
	}
    }
  va_end(ap);
  return (0);
}
