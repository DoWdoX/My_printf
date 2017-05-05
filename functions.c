/*
** functions.c for functions.c in /home/DoWdoX/printf
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Tue Nov  8 15:44:41 2016 DORIAN DEBOUT
** Last update Wed Nov 30 11:00:24 2016 DORIAN DEBOUT
*/

#include "./include/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int	my_put_nbr(int n)
{
  int   D;

  D = 1;
  if (n < 0)
    {
      my_putchar('-');
      n *= -1;
    }
  while ((n / D) >= 10)
    {
      D *= 10;
    }
  while (D > 0)
    {
      my_putchar((n / D) % 10 + 48);
      D /= 10;
    }
}

char    *my_strcpy(char *dest, char *src)
{
  int   i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
