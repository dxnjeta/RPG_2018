##
## EPITECH PROJECT, 2019
## my_defender
## File description:
## makefile
##

SRC	=	main.c		\
		npc.c		\
		pause.c		\
		the_state.c	\
		settings.c	\
		how_to_play.c	\
		my_putstr.c	\
		my_putchar.c	\
		create_window.c	\
		event_loop.c	\
		event_loop_2.c	\
		player.c	\
		game_state.c	\
		draw_state.c	\
		draw_state2.c	\
		draw_state3.c	\
		menu.c		\
		text.c		\
		text2.c		\
		mouse_state.c	\
		set_cursor.c	\
		set_cursor_2.c	\
		movement.c	\
		game_sound.c	\
		functions.c	\
		destroy.c	\
		intro.c		\
		map.c		\
		elements.c	\
		pos_of_map.c	\
		pos_of_map2.c	\
		pos_of_map3.c	\
		decor.c		\
		enemy.c		\
		player_status.c	\
		animations.c	\
		number_score.c	\
		map_count.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-g -g3 -ggdb -I ./include \
		-l csfml-graphics -l csfml-audio -l csfml-window \
		-l csfml-system -lm

all:		$(NAME) message

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

message:
		@echo "SUCCESSFULLY COMPILED!"
