/*
** my_getnbr.c for Allum1 in /home/tahery_b/rendu/CPE/CPE_2015_Allum1
**
** Made by Tahery Alexandre
** Login   <tahery_b@epitech.net>
**
** Started on  Sat Jul 16 13:54:52 2016 Tahery Alexandre
** Last update Wed Jul 20 02:15:59 2016 Tahery Alexandre
*/

#include "my.h"
#include "get_next_line.h"

int		my_getnbr(char *str)
{
  int		l;
  int		deci;
  int		result;

  l = (my_strlen(str) - 1);
  deci = 1;
  result = 0;
  while (l >= 0)
    {
      if (str[l] != '-' && str[l] != '+')
	{
	  result = (str[l] - 48) * deci  + result;
	  deci = deci * 10;
	  l--;
	}
      else if (str[l] == '-')
	{
	  l--;
	  result = result * -1;
	}
      else
	  l--;
    }
  return (result);
}
