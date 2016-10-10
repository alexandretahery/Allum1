/*
** my.h for allum1 in /home/tahery_b/rendu/CPE/CPE_2015_alum1_bootstrap
**
** Made by Tahery Alexandre
** Login   <tahery_b@epitech.net>
**
** Started on  Thu Jul 14 07:58:37 2016 Tahery Alexandre
** Last update Wed Jul 20 02:11:26 2016 Tahery Alexandre
*/

#ifndef MY_H_
# define MY_H_

int		**edit_buf(int **buf, int size, int line, int nbr);
int		**my_buf_malloc(int size);
int		**data_for_draw(int **buf, int size);
void		my_putstr(char *str);
void		display_stars(int size);
void		display_char(int **buf, char *str, int i_cursor, int data);
void		display_cut(int **buf, int i_cursor, int size);
void		display_my_buffer(int **buf, int size);
void		the_game(int **buf, int size);
void		final_free(int **buf, int size);
void		my_putnbr(int nb);
void		my_putchar(char c);
int		select_match(int **buf, int lines);
int		select_lines(int **buf, int size);
int		**edit_buf(int **buf, int size, int line, int match);
int		my_strlen(char *str);
int		my_getnbr(char *str);
int		**ia_select_match(int **buf, int size, int lines);
int		ia_select_lines(int **buf, int size);
int		how_manymatches(int **buf, int size);
int		how_many_lines_not_empty(int **buf, int size);
int		main();

#endif /* !MY_H_ */
