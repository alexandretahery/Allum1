/*
** my_putnbr.c for allum1 in /home/tahery_b/rendu/CPE/CPE_2015_Allum1
**
** Made by Tahery Alexandre
** Login   <tahery_b@epitech.net>
**
** Started on  Fri Jul 15 22:44:26 2016 Tahery Alexandre
** Last update Sat Jul 16 13:55:18 2016 Tahery Alexandre
*/
#include <unistd.h>
#include "my.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putnbr(int nb)
{
  if (nb < 0)
    {
      nb = - nb;
      my_putchar('-');
    }
  if (nb >= 10)
    {
      my_putnbr(nb / 10);
      my_putnbr(nb % 10);
    }
  else
    my_putchar(nb + '0');
}
