/*
** my_put_nbr_hd.c for my_put_nbr_hd.c in /home/DoWdoX/printf
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Wed Nov 16 13:35:03 2016 DORIAN DEBOUT
** Last update Wed Nov 16 15:39:50 2016 DORIAN DEBOUT
*/

#include "./include/my.h"

int     my_put_nbr_hd(short int i)
{
  if (i < 0)
    {
      my_putchar('-');
      i = i * -1;
    }
  if (i >= 10)
    my_put_nbr_hd(i / 10);
  i = i % 10 + '0';
  my_putchar(i);
}
