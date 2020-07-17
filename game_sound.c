/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** game_sound
*/

#include "my.h"

void	play_sound(game_t *g)
{
    if (g->state == -1 || g->state == -2) {
        if (sfSound_getStatus(g->s->intros) == sfPaused)
            sfSound_play(g->s->intros);
    } else
        sfSound_pause(g->s->intros);
    if (g->state == -2) {
        sfSound_setVolume(g->s->intros, 1);
    }
    if (g->state == 1 || g->state == 6 || g->state == 0 \
    || g->state == 2 || g->state == 3) {
        if (sfSound_getStatus(g->s->background_s) == sfPaused)
            sfSound_play(g->s->background_s);
    } else
        sfSound_pause(g->s->background_s);
}

static	void	click_sound(sound_t *s)
{
    s->mouse_click = sfSoundBuffer_createFromFile("music/pcmouse.wav");
    s->click = sfSound_create();
    sfSound_setBuffer(s->click, s->mouse_click);
    sfSound_setVolume(s->click, s->m);
    s->move_s = sfSoundBuffer_createFromFile("music/step.wav");
    s->move = sfSound_create();
    sfSound_setBuffer(s->move, s->move_s);
    sfSound_setVolume(s->move, s->m);
    s->lifeb = sfSoundBuffer_createFromFile("music/life.ogg");
    s->life = sfSound_create();
    sfSound_setBuffer(s->life, s->lifeb);
    sfSound_setVolume(s->life, s->m);
}

static	void	name_sound(sound_t *s)
{
    s->donjetab = sfSoundBuffer_createFromFile("music/donjeta.wav");
    s->donjeta = sfSound_create();
    sfSound_setBuffer(s->donjeta, s->donjetab);
    s->emanuelb = sfSoundBuffer_createFromFile("music/emanuel.wav");
    s->emanuel = sfSound_create();
    sfSound_setBuffer(s->emanuel, s->emanuelb);
    s->besartb = sfSoundBuffer_createFromFile("music/besart.wav");
    s->besart = sfSound_create();
    sfSound_setBuffer(s->besart, s->besartb);
    s->endrib = sfSoundBuffer_createFromFile("music/endri.wav");
    s->endri = sfSound_create();
    sfSound_setBuffer(s->endri, s->endrib);
    s->coinb = sfSoundBuffer_createFromFile("music/coin.wav");
    s->coin = sfSound_create();
    sfSound_setBuffer(s->coin, s->coinb);
    sfSound_setVolume(s->coin, s->m);
    s->diamondb = sfSoundBuffer_createFromFile("music/diamond.wav");
    s->diamond = sfSound_create();
    sfSound_setBuffer(s->diamond, s->diamondb);
    sfSound_setVolume(s->diamond, s->m);
}

sound_t	*game_sound(void)
{
    sound_t	*s = malloc(sizeof(sound_t));

    s->n = 10;
    s->m = 40;
    name_sound(s);
    click_sound(s);
    s->bg_sb = sfSoundBuffer_createFromFile("music/boss.ogg");
    s->background_s = sfSound_create();
    sfSound_setBuffer(s->background_s, s->bg_sb);
    sfSound_setVolume(s->background_s, s->n);
    sfSound_setLoop(s->background_s, sfTrue);
    sfSound_play(s->background_s);
    s->introsb = sfSoundBuffer_createFromFile("music/bgmus.wav");
    s->intros = sfSound_create();
    sfSound_setBuffer(s->intros, s->introsb);
    sfSound_setVolume(s->intros, 2);
    sfSound_setLoop(s->intros, sfTrue);
    sfSound_play(s->intros);
    return (s);
}
