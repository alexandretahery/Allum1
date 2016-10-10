/*
** allum1.c for allum1 in /home/tahery_b/rendu/CPE/CPE_2015_Allum1
**
** Made by Tahery Alexandre
** Login   <tahery_b@epitech.net>
**
** Started on  Fri Jul 15 21:56:53 2016 Tahery Alexandre
** Last update Sat Jul 16 14:00:02 2016 Tahery Alexandre
*/

#include "my.h"

int		ia_select_lines(int **buf, int size)
{
  int		i_count;

  i_count = 0;
  my_putstr("\nAI's turn...\n");
  while (i_count != size)
    {
      if (buf[i_count][1] != 0)
	return (i_count);
      i_count++;
    }
  return (-1);
}

int		how_many_lines_not_empty(int **buf, int size)
{
  int		i_count;
  int		lines_ne;

  i_count = 0;
  lines_ne = 0;
  while (i_count != size)
    {
      if (buf[i_count][1] != 0)
	lines_ne++;
      i_count++;
    }
  return (lines_ne);
}

void		display_last(int **buf, int nbr_lines, int lines)
{
  if (nbr_lines != 1)
    my_putnbr(buf[lines][1] - 1);
  if (nbr_lines == 1)
    {
      if (buf[lines][1] == 1)
	my_putnbr(buf[lines][1]);
      else
	my_putnbr(buf[lines][1] - 1);
    }
}

int		**ia_select_match(int **buf, int size, int lines)
{
  int		nbr_lines;

  nbr_lines = how_many_lines_not_empty(buf, size);
  if (nbr_lines != 1)
    {
      my_putstr("AI removed ");
      my_putnbr(buf[lines][1]);
      my_putstr(" match(es) from line ");
      my_putnbr(lines + 1);
      my_putchar('\n');
      buf = edit_buf(buf, size, lines, buf[lines][1]);
    }
  else
    {
      my_putstr("AI removed ");
      display_last(buf, nbr_lines, lines);
      my_putstr(" match(es) from line ");
      my_putnbr(lines + 1);
      my_putchar('\n');
      if (buf[lines][1] != 1)
	buf = edit_buf(buf, size, lines, (buf[lines][1] - 1));
      else
	buf = edit_buf(buf, size, lines, (buf[lines][1]));
    }
  return (buf);
}
