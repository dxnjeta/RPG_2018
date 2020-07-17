/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** npc
*/

#include "my.h"

static	void	npc_rect(npc_t *n)
{
    n->clock = sfClock_create();
    n->rect.left = 0;
    n->rect.top = 0;
    n->rect.height = 180;
    n->rect.width = 180;
    sfSprite_setTextureRect(n->mush, n->rect);
    sfSprite_setTextureRect(n->hwall, n->rect);
    sfSprite_setTextureRect(n->tree, n->rect);
    n->lt = sfTexture_createFromFile("assets/h.png", NULL);
    n->ls = sfSprite_create();
    sfSprite_setTexture(n->ls, n->lt, sfTrue);
    sfSprite_setScale(n->ls, set_scale(0.3, 0.3));
    n->dft = sfTexture_createFromFile("assets/4.png", NULL);
    n->df = sfSprite_create();
    sfSprite_setTexture(n->df, n->dft, sfTrue);
    sfSprite_setScale(n->df, set_scale(0.4, 0.4));
    sfSprite_setPosition(n->ls, set_position(100, 450));
    sfSprite_setPosition(n->df, set_position(100, 650));
}

static	void	paused(npc_t *n)
{
    n->pauset = sfTexture_createFromFile("assets/p.png", NULL);
    n->pause = sfSprite_create();
    sfSprite_setTexture(n->pause, n->pauset, sfTrue);
    sfTexture_setSmooth(n->pauset, sfTrue);
    sfSprite_setColor(n->pause, sfGreen);
    sfSprite_setPosition(n->pause, set_position(300, 30));
    sfSprite_setScale(n->pause, set_scale(0.8, 0.8));
    n->cryt = sfTexture_createFromFile("assets/cry.jpg", NULL);
    n->cry = sfSprite_create();
    sfSprite_setTexture(n->cry, n->cryt, sfTrue);
    sfSprite_setPosition(n->cry, set_position(300, 200));
    n->wont = sfTexture_createFromFile("assets/iwon.jpg", NULL);
    n->won = sfSprite_create();
    sfSprite_setTexture(n->won, n->wont, sfTrue);
    sfSprite_setPosition(n->won, set_position(0, 100));
}

npc_t	*npc(void)
{
    npc_t	*n = malloc(sizeof(npc_t));

    n->treet = sfTexture_createFromFile("assets/help_tree.png", NULL);
    n->tree = sfSprite_create();
    sfSprite_setTexture(n->tree, n->treet, sfTrue);
    n->hwallt = sfTexture_createFromFile("assets/hahawall.png", NULL);
    n->hwall = sfSprite_create();
    sfSprite_setTexture(n->hwall, n->hwallt, sfTrue);
    n->musht = sfTexture_createFromFile("assets/mushroom.png", NULL);
    n->mush = sfSprite_create();
    sfSprite_setTexture(n->mush, n->musht, sfTrue);
    npc_rect(n);
    sfSprite_setPosition(n->mush, set_position(1630, 1160));
    sfSprite_setPosition(n->tree, set_position(2900, 240));
    sfSprite_setPosition(n->hwall, set_position(990, 920));
    paused(n);
    return (n);
}

void    usage_h(void)
{
    my_putstr("\tUSAGE\n");
    my_putstr("\n\t\t./my_rpg map.txt - to launch the game.\n");
    my_putstr("\n\t\t./my_rpg -h - usage option.\n");
    my_putstr("\n\tRead how to play menu!\n");
}
