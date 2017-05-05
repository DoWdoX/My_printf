/*
** my_put_nbr_u.c for my_put_nbr_u.c in /home/DoWdoX/printf
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Wed Nov 16 12:30:49 2016 DORIAN DEBOUT
** Last update Wed Nov 16 15:40:15 2016 DORIAN DEBOUT
*/

#include "./include/my.h"

int     my_put_nbr_u(unsigned int i)
{
  if (i < 0)
    write(2, "please enter an unsigned int\n", 25);
  if (i < 0)
    {
      my_putchar('-');
      i = i * -1;
    }
  if (i >= 10)
    my_put_nbr_u(i / 10);
  i = i % 10 + '0';
  my_putchar(i);
}
