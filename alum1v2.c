/*
** allum1v2.c for almu1 in /home/tahery_b/rendu/CPE/CPE_2015_Allum1
**
** Made by Tahery Alexandre
** Login   <tahery_b@epitech.net>
**
** Started on  Thu Jul 14 04:38:46 2016 Tahery Alexandre
** Last update Sat Jul 16 14:03:36 2016 Tahery Alexandre
*/
#include <stdlib.h>
#include "get_next_line.h"
#include "my.h"

int		**edit_buf(int **buf, int size, int line, int match)
{
  if (line >= 0 && line <= size && match <= buf[line][1] && match > 0)
    {
      buf[line][1] -= match;
      buf[line][2] += match;
    }
  return (buf);
}

int		main(int argc, char **argv)
{
  int		**buf;
  int		size;

  if (argc < 2)
    size = 4;
  else
    size = my_getnbr(argv[1]);
  if ((buf = my_buf_malloc(size)) == NULL)
    return (1);
  buf = data_for_draw(buf, size);
  display_my_buffer(buf, size);
  the_game(buf, size);
  final_free(buf, size);
  return (0);
}
