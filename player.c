/*
** player.c for allum1.c in /home/tahery_b/rendu/CPE/CPE_2015_Allum1
**
** Made by Tahery Alexandre
** Login   <tahery_b@epitech.net>
**
** Started on  Fri Jul 15 21:46:11 2016 Tahery Alexandre
** Last update Thu Jul 21 22:14:19 2016 Tahery Alexandre
*/

#include "get_next_line.h"
#include "my.h"

int		str_empty(char *str)
{
  if (str[0] == '\0')
    return (-1);
  else
    return (0);
}

int		select_lines(int **buf, int size)
{
  int		lines;
  char		*str;

  my_putstr("\nYour turn:\n");
  while (42)
    {
      my_putstr("Line: ");
      if (str_empty(str = get_next_line(0)) == -1)
	return (-1);
      if ((lines = my_getnbr(str)) > 0 && lines - 1 < size &&
	 buf[lines - 1][1] != 0)
	return (lines - 1);
      else if (lines - 1 >= size)
	my_putstr("Error: This line is out of range\n");
      else if (lines - 1 < 0)
	my_putstr("Error: invalid input (positive number expected)\n");
      else if (buf[lines - 1][1] == 0)
	my_putstr("Error:This line is empty\n");
    }
}

int		select_match(int **buf, int lines)
{
  int		match;
  char		*str;

  while (42)
    {
      my_putstr("Matches: ");
      if (str_empty(str = get_next_line(0)) == -1)
	return (-1);
      if ((match = my_getnbr(str)) > 0 && match <= buf[lines][1])
	return (match);
      else if (match == 0)
	my_putstr("Error: you have to remove at least one match\n");
      else if (match < 0)
	my_putstr("Error: invalid input (positive number expected)\n");
      else if (match > buf[lines][1])
	my_putstr("Error: not enough matches on this line\n");
    }
}
