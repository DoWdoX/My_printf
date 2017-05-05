/*
** my_put_nbr_ld.c for void    my_putchar(char c); in /home/DoWdoX/printf
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Wed Nov 16 13:37:35 2016 DORIAN DEBOUT
** Last update Wed Nov 16 15:40:05 2016 DORIAN DEBOUT
*/

#include "./include/my.h"

int     my_put_nbr_ld(long int nb)
{
  long int      i;

  i = nb;
  if (i < 0)
    {
      my_putchar('-');
      i = i * -1;
    }
  if (i >= 10)
    my_put_nbr_ld(i / 10);
  i = i % 10 + '0';
  my_putchar(i);
}
