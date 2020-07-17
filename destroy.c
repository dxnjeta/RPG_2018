/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** destroy
*/

#include "my.h"

static	void	destroy_sprites_3(game_t *g)
{
    sfSound_destroy(g->s->coin);
    sfSoundBuffer_destroy(g->s->coinb);
    sfSound_destroy(g->s->diamond);
    sfSoundBuffer_destroy(g->s->diamondb);
    sfSound_destroy(g->s->life);
    sfSoundBuffer_destroy(g->s->lifeb);
}

static	void	destroy_sprites_2(game_t *g)
{
    destroy_sprites_3(g);
    sfText_destroy(g->t->text);
    sfText_destroy(g->t->text2);
    sfText_destroy(g->t->text3);
    sfText_destroy(g->t->text4);
    sfFont_destroy(g->t->font);
    sfSprite_destroy(g->p->m);
    sfTexture_destroy(g->p->man);
    sfSprite_destroy(g->p->b);
    sfTexture_destroy(g->p->bg);
    sfSound_destroy(g->s->intros);
    sfSoundBuffer_destroy(g->s->introsb);
    sfSound_destroy(g->s->donjeta);
    sfSoundBuffer_destroy(g->s->donjetab);
    sfSound_destroy(g->s->emanuel);
    sfSoundBuffer_destroy(g->s->emanuelb);
    sfSound_destroy(g->s->endri);
    sfSoundBuffer_destroy(g->s->endrib);
    sfSound_destroy(g->s->besart);
    sfSoundBuffer_destroy(g->s->besartb);
}

void	destroy_sprites(game_t *g)
{
    destroy_sprites_2(g);
    sfSound_destroy(g->s->click);
    sfSoundBuffer_destroy(g->s->mouse_click);
    sfSound_destroy(g->s->background_s);
    sfSoundBuffer_destroy(g->s->bg_sb);
    sfSound_destroy(g->s->move);
    sfSoundBuffer_destroy(g->s->move_s);
    sfSprite_destroy(g->m->curs);
    sfTexture_destroy(g->m->tcursor);
    sfSprite_destroy(g->m->d);
    sfTexture_destroy(g->m->di);
    sfSprite_destroy(g->m->sbg);
    sfTexture_destroy(g->m->bg);
    sfTexture_destroy(g->m->b);
    sfSprite_destroy(g->m->bp);
    sfSprite_destroy(g->m->bq);
    sfSprite_destroy(g->m->bh);
    sfSprite_destroy(g->m->s);
}
