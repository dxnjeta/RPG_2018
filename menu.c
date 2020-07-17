/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** menu
*/

#include "my.h"

void	animation(menu_t *m)
{
    m->time = sfClock_getElapsedTime(m->clock);
    m->seconds = m->time.microseconds / 1000000.0;
    if (m->seconds > 0.14) {
        if (m->rect1.left == 2000) {
            m->rect1.left = 0;
        } else
            m->rect1.left = m->rect1.left + 500;
        sfSprite_setTextureRect(m->d, m->rect1);
        sfClock_restart(m->clock);
    }
}

static	void	cursor_set(menu_t *m)
{
    m->cursor.left = 0;
    m->cursor.top = 0;
    m->cursor.height = 82;
    m->cursor.width = 80;
    m->tcursor = sfTexture_createFromFile("assets/smile.png", NULL);
    sfTexture_setSmooth(m->tcursor, sfTrue);
    m->curs = sfSprite_create();
    sfSprite_setTexture(m->curs, m->tcursor, sfTrue);
    sfSprite_setTextureRect(m->curs, m->cursor);
    sfSprite_setPosition(m->curs, set_position(50, 50));
    sfSprite_setScale(m->curs, set_scale(0.45, 0.45));
}

void	menu_rect(menu_t *m)
{
    cursor_set(m);
    m->clock = sfClock_create();
    m->rect.left = 0;
    m->rect.width = 300;
    m->rect.height = 150;
    m->rect.top = 0;
    m->rect1.left = 0;
    m->rect1.width = 500;
    m->rect1.height = 500;
    m->rect1.top = 0;
    m->di = sfTexture_createFromFile("assets/d3.png", NULL);
    sfTexture_setSmooth(m->di, sfTrue);
    m->d = sfSprite_create();
    sfSprite_setTexture(m->d, m->di, sfTrue);
    sfSprite_setTextureRect(m->d, m->rect1);
    sfSprite_setPosition(m->d, set_position(425, 0));
    sfSprite_setScale(m->d, set_scale(0.7, 0.7));
}

menu_t	*menu(void)
{
    menu_t	*m = malloc(sizeof(menu_t));

    menu_rect(m);
    m->bg = sfTexture_createFromFile("assets/bmenu.png", NULL);
    m->sbg = sfSprite_create();
    sfSprite_setTexture(m->sbg, m->bg, sfTrue);
    m->b = sfTexture_createFromFile("assets/bt.png", NULL);
    sfTexture_setSmooth(m->b, sfTrue);
    m->bp = sfSprite_create();
    sfSprite_setTexture(m->bp, m->b, sfTrue);
    sfSprite_setPosition(m->bp, set_position(450, 350));
    sfSprite_setTextureRect(m->bp, m->rect);
    m->bq = sfSprite_copy(m->bp);
    sfSprite_setPosition(m->bp, set_position(450, 500));
    m->bh = sfSprite_copy(m->bp);
    sfSprite_setPosition(m->bh, set_position(450, 800));
    m->s = sfSprite_copy(m->bp);
    sfSprite_setPosition(m->s, set_position(450, 650));
    return (m);
}
