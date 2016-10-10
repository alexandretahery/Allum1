/*
** get_next_line.h for get_next_line in /home/tahery_b/CPE/CPE_2015_getnextline
**
** Made by Tahery Alexandre
** Login   <tahery_b@epitech.net>
**
** Started on  Tue Jun  7 10:05:53 2016 Tahery Alexandre
** Last update Wed Jul 20 02:17:03 2016 Tahery Alexandre
*/

#ifndef GET_NEXT_LINE_
# define GET_NEXT_LINE_
#ifndef READ_SIZE
# define READ_SIZE (1)
#endif /* !READ_SIZE */

int		my_strlen(char *str);
char		*my_strcat(char *str1, char *str2);
char		*get_next_line(const int fd);

#endif /* !GET_NEXT_LINE_ */
