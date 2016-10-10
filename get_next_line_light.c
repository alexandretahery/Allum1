/*
** get_next_line_light.c for allum1 in /home/tahery_b/rendu/CPE/CPE_2015_Allum1
**
** Made by Tahery Alexandre
** Login   <tahery_b@epitech.net>
**
** Started on  Thu Jul 14 08:28:37 2016 Tahery Alexandre
** Last update Wed Aug 10 18:28:47 2016 Tahery Alexandre
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

char		*my_strcat(char *str1, char *str2)
{
  int		i_count;
  int		y_count;
  char		*ret;

  i_count = my_strlen(str1) + my_strlen(str2);
  if ((ret = malloc(sizeof(char) * ( i_count + 1))) == NULL)
    return (NULL);
  ret[i_count] = '\0';
  i_count = 0;
  y_count = 0;
  while (str1[i_count] != '\0')
    {
      ret[i_count] = str1[i_count];
      i_count++;
    }
  free(str1);
  while (str2[y_count] != '\0')
    {
      ret[i_count] = str2[y_count];
      y_count++;
      i_count++;
    }
  return (ret);
}

char		*get_next_line(const int fd)
{
  char		*buf;
  char		*str;
  int		ret;

  ret = 1;
  if ((str = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  str[0] = '\0';
  str[1] = '\0';
  if ((buf = malloc(sizeof(char) * 1)) == NULL)
    return (NULL);
  buf[0] = '\0';
  while (str[0] != '\n' && ret != 0)
    {
      ret = read(fd, str, READ_SIZE);
      if (str[0] != '\n')
	buf = my_strcat(buf, str);
    }
  free(str);
  return (buf);
}
