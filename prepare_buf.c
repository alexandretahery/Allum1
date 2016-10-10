/*
** prepare_buf.c for Allum1 in /home/tahery_b/rendu/CPE/CPE_2015_Allum1
**
** Made by Tahery Alexandre
** Login   <tahery_b@epitech.net>
**
** Started on  Sat Jul 16 13:56:21 2016 Tahery Alexandre
** Last update Sat Jul 16 13:56:23 2016 Tahery Alexandre
*/

#include <stdlib.h>

int		**my_buf_malloc(int size)
{
  int		**buf;
  int		i_count;

  i_count = 0;
  if ((buf = malloc(sizeof(int *) * size)) == NULL)
    return (NULL);
  while (i_count != size)
    {
      if ((buf[i_count] = malloc(sizeof(int) * 3)) == NULL)
	return (NULL);
      i_count++;
    }
  return (buf);
}

int		**data_for_draw(int **buf, int size)
{
  int		i_count;
  int		nbr_stick;
  int		space;

  i_count = 0;
  nbr_stick = 1;
  space = size - 1;
  while (i_count != size)
    {
      buf[i_count][0] = space;
      buf[i_count][1] = nbr_stick;
      buf[i_count][2] = space;
      nbr_stick = nbr_stick + 2;
      space--;
      i_count++;
    }
  return (buf);
}

void		final_free(int **buf, int size)
{
  int		i;

  i = 0;
  while (i != size - 1)
    {
      free(buf[i]);
      i++;
    }
}
