/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** my_h
*/

#ifndef	MY_H_
#define MY_H_

#define FPS (75)
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

typedef	struct	game
{
    int	sleep;
    int	boks;
    int	life_left;
    int	state;
    int	score;
    int	diamondss;
    char	*sco;
    char	*tm;
    sfText	*time_tx;
    sfText	*sc;
    sfTexture	*dt;
    sfSprite	*ds;
    sfTexture	*diamond;
    sfSprite	*diamonds;
    sfTexture	*life;
    sfSprite	*lifes;
    sfTexture	*lt;
    sfSprite	*ls;
    sfIntRect	lrect;
    sfIntRect	drect;
    int	screen_dx;
    int	screen_dy;
    int	time_left;
    int	time;
    struct player_status *ps;
    struct intro *i;
    struct elements *el;
    struct text *t;
    struct entity *e;
    struct menu *m;
    struct player *p;
    struct sound *s;
    struct how_to_play *h;
    struct view_create *v;
    struct enemy *a;
    struct npc *n;
    struct settings *set;
}	game_t;

typedef	struct	settings
{
    sfIntRect	rect;
    sfIntRect	rect1;
    sfTexture	*s1t;
    sfSprite	*s1;
    sfTexture	*set;
    sfSprite	*se;
    sfTexture	*m1t;
    sfSprite	*m1;
    sfTexture	*slit1;
    sfSprite	*slit;
    sfTexture	*slit2;
    sfSprite	*sli2;
    sfSprite	*ssli2;
    sfSprite	*sslit;
}	settings_t;

typedef	struct	npc
{
    sfClock	*clock;
    sfTime	time;
    float	seconds;
    sfTexture	*treet;
    sfSprite	*tree;
    sfTexture	*pauset;
    sfSprite	*pause;
    sfTexture	*hwallt;
    sfSprite	*hwall;
    sfTexture	*musht;
    sfSprite	*mush;
    sfIntRect	rect;
    sfTexture	*lt;
    sfSprite	*ls;
    sfTexture	*dft;
    sfSprite	*df;
    sfTexture	*wont;
    sfSprite	*won;
    sfTexture	*cryt;
    sfSprite	*cry;
}	npc_t;

typedef	struct	how_to_play
{
    sfTexture	*esct;
    sfSprite	*esc;
    sfTexture	*bgt;
    sfSprite	*bg;
    sfTexture	*htpt;
    sfSprite	*htp;
    sfTexture	*spacet;
    sfSprite	*space;
    sfTexture	*it;
    sfSprite	*i;
    sfIntRect	rect;
    sfIntRect	rect1;
    sfSprite	*arr;
    sfTexture	*arrt;
    sfClock	*clock;
    sfTime	time;
    float	seconds;
    sfClock	*clock1;
    sfTime	time1;
    float	seconds1;
}	how_to_play_t;

typedef	struct	player_status
{
    sfRectangleShape	*r;
    sfIntRect	rect;
    sfTexture	*namet;
    sfSprite	*names;
    sfTexture	*playerst;
    sfSprite	*players;
    sfTexture	*pst;
    sfSprite	*ps;
    int	check;
}	player_status_t;

typedef	struct	enemy
{
    sfClock	*clock;
    sfTime	time;
    float	seconds;
    sfTexture	*puncht;
    sfSprite	*punch;
    sfSprite	*punch1;
    sfSprite	*punch2;
    sfSprite	*punch3;
    sfIntRect	rect;
}	enemy_t;

typedef	struct	decor
{
    sfTexture	*tree1t;
    sfSprite	*tree1;
    sfSprite	*tree2;
    sfSprite	*tree3;
    sfTexture	*hwt;
    sfSprite	*hw;
    sfTexture	*farmt;
    sfSprite	*farm;
    sfTexture	*water1t;
    sfSprite	*water1;
    sfTexture	*water2t;
    sfSprite	*water2;
    sfTexture	*water3t;
    sfSprite	*water3;
    sfTexture	*water4t;
    sfSprite	*water4;
    sfTexture	*water5t;
    sfSprite	*water5;
    sfTexture	*water6t;
    sfSprite	*water6;
    sfTexture	*water7t;
    sfSprite	*water7;
    sfTexture	*water8t;
    sfSprite	*water8;
    sfTexture	*locked;
    sfSprite	*lock;
}	decor_t;

typedef	struct	elements
{
    struct decor *d;
    sfTexture	*tcoin;
    sfSprite	*coin;
    sfTexture	*bordert;
    sfSprite	*border;
    sfTexture	*tdia;
    sfSprite	*dia;
    sfClock	*clock;
    sfTime	time;
    float	seconds;
    sfIntRect	rect;
    sfTexture	*watert;
    sfSprite	*water;
    sfTexture	*houset;
    sfSprite	*house;
    sfTexture	*walkt;
    sfSprite	*walk;
    sfTexture	*walk1t;
    sfSprite	*walk1;
    sfTexture	*walk2t;
    sfSprite	*walk2;
    sfTexture	*walk3t;
    sfSprite	*walk3;
    sfTexture	*walk4t;
    sfSprite	*walk4;
    sfTexture	*wallt;
    sfSprite	*wall;
    sfTexture	*grasst;
    sfSprite	*grass;
    sfTexture	*applet;
    sfSprite	*apple;
    sfSprite	*apple2;
    sfSprite	*apple3;
    sfTexture	*stone1t;
    sfSprite	*stone1;
    sfTexture	*stone2t;
    sfSprite	*stone2;
    sfTexture	*stone3t;
    sfSprite	*stone3;
    sfTexture	*stone4t;
    sfSprite	*stone4;
    sfTexture	*stonet;
    sfSprite	*stone;
}	elements_t;

typedef	struct	intro
{
    int	pos_intro;
    sfTexture	*dt;
    sfSprite	*d;
    sfTexture	*introt;
    sfSprite	*intros;
    sfSprite	*button;
    sfTexture	*textt;
    sfSprite	*text;
}	intro_t;

typedef	struct	sound
{
    int	n;
    int	m;
    sfSound	*background_s;
    sfSoundBuffer	*bg_sb;
    sfSound	*click;
    sfSoundBuffer	*mouse_click;
    sfSound	*move;
    sfSoundBuffer	*move_s;
    sfSound	*intros;
    sfSoundBuffer	*introsb;
    sfSound	*emanuel;
    sfSoundBuffer	*emanuelb;
    sfSound	*endri;
    sfSoundBuffer	*endrib;
    sfSound	*donjeta;
    sfSoundBuffer	*donjetab;
    sfSound	*besart;
    sfSoundBuffer	*besartb;
    sfSound	*coin;
    sfSoundBuffer	*coinb;
    sfSound	*diamond;
    sfSoundBuffer	*diamondb;
    sfSound	*life;
    sfSoundBuffer	*lifeb;
}	sound_t;

typedef	struct	view_create
{
    sfFloatRect	rectangle;
    sfFloatRect	viewport;
    sfView	*view;
    sfVector2f	position;
}	view_create_t;

typedef	struct	text
{
    sfFont	*font;
    sfText	*text;
    sfText	*text2;
    sfText	*text3;
    sfText	*text4;
    sfText	*text5;
    sfText	*text6;
    sfText	*text7;
    sfText	*text8;
    sfText	*plus;
    sfText	*p_status;
    sfText	*plus2;
    sfText	*how1;
    sfText	*time;
    sfText	*how2;
    sfText	*how3;
    sfText	*how4;
    sfText	*how5;
    sfText	*how6;
    sfText	*set1;
    sfText	*in1;
    sfText	*in2;
    sfText	*pause1;
    sfText	*pause2;
    sfText	*pause3;
    sfText	*bre1;
    sfText	*bre2;
}	text_t;

typedef	struct	menu
{
    sfIntRect	cursor;
    sfTexture	*tcursor;
    sfSprite	*curs;
    sfClock	*clock;
    float	seconds;
    sfTime	time;
    sfIntRect	rect1;
    sfTexture	*di;
    sfSprite	*d;
    sfTexture	*bg;
    sfSprite	*sbg;
    sfIntRect	rect;
    sfTexture	*b;
    sfSprite	*bp;
    sfSprite	*bq;
    sfSprite	*bh;
    sfSprite	*s;
}	menu_t;

typedef	struct	player
{
    int	i;
    sfClock	*clock;
    float	seconds;
    sfTime	time;
    sfVector2f	right;
    sfVector2f	left;
    sfVector2f	up;
    sfVector2f	down;
    float	move_speed;
    sfIntRect	rect;
    sfSprite	*player;
    sfTexture	*man;
    sfSprite	*m;
    sfTexture	*donjetat;
    sfSprite	*donjeta;
    sfTexture	*emanuelt;
    sfSprite	*emanuel;
    sfTexture	*endrit;
    sfSprite	*endri;
    sfTexture	*bg;
    sfSprite	*b;
}	player_t;

sfRenderWindow	*create_my_window(unsigned int, \
    unsigned int);
sfVector2f	set_position(int x, int y);
sfVector2f	set_scale(float x, float y);
sfVector2i	set_position_int(int x, int y);
int	count_lines(char **);
int	count_cols(char **);
char	*get_str(int);
void	my_putchar(char);
void	check_lifes(game_t *);
void	check_diamonds(game_t *);
void	display_window(sfRenderWindow *, game_t *, char **);
void	usage_h(void);
int	my_putstr(char const *);
void	event_loop(sfRenderWindow *, game_t *, char **);
menu_t	*menu(void);
how_to_play_t	*how_to_play(void);
game_t	*game(void);
settings_t	*settings(void);
npc_t	*npc(void);
decor_t	*decor(void);
player_t	*set_player(void);
text_t	*text(void);
intro_t	*intro(game_t *);
enemy_t	*enemy(void);
elements_t	*elements(void);
view_create_t	*get_view(view_create_t *, game_t *);
sound_t	*game_sound(void);
player_status_t	*player_status(void);
void	player_animation(player_t *);
void	punch_animation(enemy_t *);
void	npc_animation(npc_t *);
void	set_cursor(game_t *, sfEvent );
void	move_up(game_t *);
void	move_down(game_t *);
void	move_left(game_t *);
void	move_right(game_t *);
void	animation(menu_t *);
void	how_animation(how_to_play_t *);
void	how_animation_2(how_to_play_t *);
void	get_cursor(game_t *, sfVector2f , sfEvent );
void	draw_game(sfRenderWindow *, game_t *, char **);
void	draw_settings(sfRenderWindow *, game_t *);
void	draw_inventory(sfRenderWindow *, game_t *);
void	draw_pause(sfRenderWindow *, game_t *);
void	draw_loose(sfRenderWindow *, game_t *);
void	draw_win(sfRenderWindow *, game_t *);
void	draw_nothing(sfRenderWindow *, game_t *);
void	draw_nothing_2(sfRenderWindow *, game_t *);
void	draw_menu(sfRenderWindow *, game_t *);
void	draw_howtoplay(sfRenderWindow *, game_t *);
void	draw_status(sfRenderWindow *, game_t *);
void	draw_intro(sfRenderWindow *, game_t *);
void	destroy_sprites(game_t *);
void	play_sound(game_t *);
void	text_of_how(text_t *);
void	player_changed(game_t *);
void	coin_animation(elements_t *);
void	collision_check(game_t *);
void	read_map(char **, sfRenderWindow *, game_t *);
void	water_edge(char **, sfRenderWindow *, game_t *);
void	water_edge_2(char **, sfRenderWindow *, game_t *);
void	walk_edge(char **, sfRenderWindow *, game_t *);
void	walk_edge_2(char **, sfRenderWindow *, game_t *);
void	water(char **, sfRenderWindow *, game_t *);
void	two_three_four(char **, sfRenderWindow *, game_t *);
void	coin_diamonds(char **, sfRenderWindow *, game_t *);
void	five_six_seven(char **, sfRenderWindow *, game_t *);
void	eight_nine_one(char **, sfRenderWindow *, game_t *);
void	change_state(game_t *, sfEvent , sfRenderWindow *);
void	player_move(sfEvent, game_t *, char **);
void	button_pause(game_t *, sfMouseMoveEvent, \
    sfMouseButtonEvent);
void	right_button(sfMouseMoveEvent , game_t *, \
    sfMouseButtonEvent );
void	left_button(sfMouseMoveEvent , game_t *, \
    sfMouseButtonEvent );
void	skip_button(sfMouseMoveEvent , game_t *, \
    sfMouseButtonEvent );
void	play_button(sfMouseMoveEvent , game_t *, \
    sfMouseButtonEvent );
void	ins_button(sfMouseMoveEvent , game_t *, \
    sfMouseButtonEvent );
void	quit_button(sfMouseMoveEvent , game_t *, \
    sfMouseButtonEvent );
void	settings_button(sfMouseMoveEvent , game_t *, \
    sfMouseButtonEvent );
void	change_state_3(game_t *, sfEvent, sfRenderWindow *);
void	change_state_4(game_t *, sfEvent, sfRenderWindow *);
int     my_strlen(char *str);
int     my_strcmp(char *env, char *word);
char    **get_new(char **map, char *line);
char    **get_map(char *filename);
char    *my_strdup(char *str);
void    border_map(char **map, sfRenderWindow *window, game_t *g);

#endif /* MY_H */
