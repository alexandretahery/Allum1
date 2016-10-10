##
## Makefile for Allum1 in /home/tahery_b/rendu/CPE/CPE_2015_Allum1
## 
## Made by Tahery Alexandre
## Login   <tahery_b@epitech.net>
## 
## Started on  Sat Jul 16 13:54:31 2016 Tahery Alexandre
## Last update Wed Jul 20 02:15:35 2016 Tahery Alexandre
##

NAME	= allum1

SRC	= alum1v2.c\
	  prepare_buf.c\
	  display_fonc.c\
	  get_next_line_light.c\
	  my_getnbr.c\
	  player.c\
	  ia.c\
	  the_game.c\
	  my_putnbr.c

OBJ	= $(SRC:.c=.o)

CFLAGS	+= -W -Wall -Werror -I./include

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
