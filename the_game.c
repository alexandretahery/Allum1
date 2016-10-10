/*
** the_game.c for allum1 in /home/tahery_b/rendu/CPE/CPE_2015_Allum1
**
** Made by Tahery Alexandre
** Login   <tahery_b@epitech.net>
**
** Started on  Fri Jul 15 21:44:17 2016 Tahery Alexandre
** Last update Thu Jul 21 22:29:04 2016 Tahery Alexandre
*/

#include "get_next_line.h"
#include "my.h"

void		play_action(int lines, int match)
{
  my_putstr("Player removed ");
  my_putnbr(match);
  my_putstr(" match(es) from line ");
  my_putnbr(lines + 1);
  my_putchar('\n');
}

int		how_manymatches(int **buf, int size)
{
  int		nbr_stick;
  int		i_count;

  i_count = 0;
  nbr_stick = 0;
  while (i_count != size)
    {
      nbr_stick += buf[i_count][1];
      i_count++;
    }
  return (nbr_stick);
}

void		the_game(int **buf, int size)
{
  int		lines;
  int		nbr_stick;
  int		ret;

  ret = how_manymatches(buf, size);
  while (ret != 0)
    {
      if ((lines = select_lines(buf, size)) == -1 ||
	  (nbr_stick = select_match(buf, lines)) == -1)
	return ;
      play_action(lines, nbr_stick);
      buf = edit_buf(buf, size, lines, nbr_stick);
      display_my_buffer(buf, size);
      if ((ret = how_manymatches(buf, size)) == 0)
	{
	  my_putstr("You lost, too bad..\n");
	  return ;
	}
      lines = ia_select_lines(buf, size);
      buf = ia_select_match(buf, size, lines);
      ret = how_manymatches(buf, size);
      display_my_buffer(buf, size);
      if (ret == 0)
	my_putstr("I lost.. snif.. I'll get you next time!!\n");
    }
}
