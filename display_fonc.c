/*
** display_fonc.c for allum1 in /home/tahery_b/rendu/CPE/CPE_2015_Allum1
**
** Made by Tahery Alexandre
** Login   <tahery_b@epitech.net>
**
** Started on  Thu Jul 14 08:09:48 2016 Tahery Alexandre
** Last update Sat Jul 16 14:05:09 2016 Tahery Alexandre
*/
#include <unistd.h>

void		my_putstr(char *str)
{
  int		i_length;

  i_length = 0;
  while (str[i_length] != '\0')
    i_length++;
  write (1, str, i_length);
}

void		display_stars(int size)
{
  int		i_count;

  i_count = 0;
  while (i_count != (size * 2 + 1 ))
    {
      my_putstr("*");
      i_count++;
    }
  my_putstr("\n");
}

void		display_char(int **buf, char *str, int i_cursor, int data)
{
  int		i_space;
  int		i_count;

  i_space = buf[i_cursor][data];
  i_count = 0;
  while (i_count != i_space)
    {
      my_putstr(str);
      i_count++;
    }
}

void		display_cut(int **buf, int i_cursor, int size)
{
  if (i_cursor == 0)
    {
      display_stars(size);
    }
  my_putstr("*");
  display_char(buf, " ", i_cursor, 0);
  display_char(buf, "|", i_cursor, 1);
  display_char(buf, " ", i_cursor, 2);
  my_putstr("*");
}

void		display_my_buffer(int **buf, int size)
{
  int		i_cursor;

  i_cursor = 0;
  while (i_cursor != size)
    {
      display_cut(buf, i_cursor, size);
      my_putstr("\n");
      i_cursor++;
    }
  display_stars(size);
}
