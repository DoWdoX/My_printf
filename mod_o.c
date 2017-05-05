/*
** octal.c for octal.c in /home/DoWdoX/printf
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Sat Nov 12 18:24:07 2016 DORIAN DEBOUT
** Last update Fri May  5 18:44:37 2017 DORIAN DEBOUT
*/

#include "./include/my.h"

int     aff(int i, int j)
{
  j = i;
  while (j < 3)
    {
      my_putchar('0');
      j = j + 1;
    }
}

int	octal(int nb, int div)
{
  int	modulo;
  int	i;
  int	j;
  int	array[i];

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
  aff(i, j);
  while (i > 0)
    {
      my_put_nbr(array[i]);
      i = i - 1;
    }
  return (0);
}
