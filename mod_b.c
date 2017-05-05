/*
** mod_b.c for mod_b.c in /home/DoWdoX/printf
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Sun Nov 13 13:17:42 2016 DORIAN DEBOUT
** Last update Wed Nov 16 15:39:00 2016 DORIAN DEBOUT
*/

#include "./include/my.h"

int     binaire(int nb, int div)
{
  int   modulo;
  int   i;
  int   array[i];

  i = 0;
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
  while (i > 0)
    {
      my_put_nbr(array[i]);
      i = i - 1;
    }
  return (0);
}
