/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** game_state
*/

#include "my.h"

static	void	time_left(game_t *g)
{
    g->time_tx = sfText_copy(g->t->text);
    g->tm = get_str(g->time_left);
    sfText_setString(g->time_tx, g->tm);
    sfText_setPosition(g->time_tx, set_position(1120, 80));
    g->t->time = sfText_copy(g->t->text);
    sfText_setString(g->t->time, "Time left:");
    sfText_setPosition(g->t->time, set_position(950, 80));
}

static	void	diamonds(game_t *g)
{
    g->time = 0;
    g->time_left = 150;
    g->diamondss = 0;
    g->sleep = 0;
    g->boks = 0;
    g->drect.left = 0;
    g->drect.width = 0;
    g->drect.top = 0;
    g->drect.height = 50;
    g->diamond = sfTexture_createFromFile("assets/diamondsss.png", NULL);
    g->diamonds = sfSprite_create();
    sfSprite_setTexture(g->diamonds, g->diamond, sfTrue);
    sfSprite_setTextureRect(g->diamonds, g->drect);
    g->dt = sfTexture_createFromFile("assets/di.png", NULL);
    g->ds = sfSprite_create();
    sfSprite_setTexture(g->ds, g->dt, sfTrue);
    sfSprite_setPosition(g->diamonds, set_position(15, 70));
    sfSprite_setPosition(g->ds, set_position(15, 70));
    time_left(g);
}

static	void	game_score(game_t *g)
{
    g->life_left = 3;
    g->t = text();
    g->lrect.left = 0;
    g->lrect.width = 180;
    g->lrect.top = 0;
    g->lrect.height = 50;
    g->score = 0;
    g->sc = sfText_copy(g->t->text);
    g->sco = get_str(g->score);
    sfText_setString(g->sc, g->sco);
    sfText_setPosition(g->sc, set_position(150, 15));
    g->life = sfTexture_createFromFile("assets/lifes.png", NULL);
    g->lifes = sfSprite_create();
    sfSprite_setTexture(g->lifes, g->life, sfTrue);
    sfSprite_setTextureRect(g->lifes, g->lrect);
    g->lt = sfTexture_createFromFile("assets/hshape.png", NULL);
    g->ls = sfSprite_create();
    sfSprite_setTexture(g->ls, g->lt, sfTrue);
    sfSprite_setPosition(g->lifes, set_position(1020, 15));
    sfSprite_setPosition(g->ls, set_position(1020, 15));
}

void	player_changed(game_t *g)
{
    switch (g->ps->check) {
    case (1):
        g->p->player = sfSprite_copy(g->p->emanuel);
        break;
    case (2):
        g->p->player = sfSprite_copy(g->p->donjeta);
        break;
    case (3):
        g->p->player = sfSprite_copy(g->p->endri);
        break;
    case (4):
        g->p->player = sfSprite_copy(g->p->m);
        break;
    }
}

game_t	*game(void)
{
    game_t	*g = malloc(sizeof(game_t));
    view_create_t	*v = malloc(sizeof(view_create_t));

    g->state = -1;
    g->screen_dx = 1200;
    g->screen_dy = 1000;
    game_score(g);
    g->set = settings();
    diamonds(g);
    g->ps = player_status();
    g->p = set_player();
    g->m = menu();
    g->v = get_view(v, g);
    g->s = game_sound();
    g->i = intro(g);
    g->el = elements();
    g->a = enemy();
    g->h = how_to_play();
    g->n = npc();
    return (g);
}
