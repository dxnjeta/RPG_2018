/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** text
*/

#include "my.h"

static	void	player_text(text_t *t)
{
    t->text6 = sfText_copy(t->text);
    sfText_setString(t->text6, \
    "Choose your hero, \n by clicking on it!");
    sfText_setFont(t->text6, t->font);
    sfText_setPosition(t->text6, set_position(315, 25));
    sfText_setCharacterSize(t->text6, 60);
    t->text7 = sfText_copy(t->text);
    sfText_setString(t->text7, \
    "You are choosing\n\n Press enter to continue!");
    sfText_setFont(t->text7, t->font);
    sfText_setPosition(t->text7, set_position(293, 825));
    sfText_setCharacterSize(t->text7, 45);
    t->text8 = sfText_copy(t->text);
    sfText_setString(t->text8, \
    "Coins:");
    sfText_setFont(t->text8, t->font);
    sfText_setPosition(t->text8, set_position(15, 15));
    sfText_setCharacterSize(t->text8, 35);
}

static	void	plus_text(text_t *t)
{
    t->plus = sfText_copy(t->text);
    sfText_setString(t->plus, "-         +");
    sfText_setFont(t->plus, t->font);
    sfText_setPosition(t->plus, set_position(460, 140));
    sfText_setCharacterSize(t->plus, 80);
    sfText_setColor(t->plus, sfMagenta);
    t->plus2 = sfText_copy(t->plus);
    sfText_setPosition(t->plus, set_position(460, 290));
    t->p_status = sfText_copy(t->text);
    sfText_setString(t->p_status, \
    " Fast\t Smart  Strong  Strong\n\nStrong  Healthy  Fast\tHealthy");
    sfText_setPosition(t->p_status, set_position(40, 500));
    sfText_setCharacterSize(t->p_status, 70);
}

static	void	set_text(text_t *t)
{
    player_text(t);
    plus_text(t);
    t->text3 = sfText_copy(t->text);
    sfText_setString(t->text3, "PLAY");
    sfText_setFont(t->text3, t->font);
    sfText_setPosition(t->text3, set_position(540, 385));
    sfText_setCharacterSize(t->text3, 50);
    t->text4 = sfText_copy(t->text);
    sfText_setString(t->text4, "SETTINGS");
    sfText_setFont(t->text4, t->font);
    sfText_setPosition(t->text4, set_position(510, 695));
    sfText_setCharacterSize(t->text4, 40);
    t->text5 = sfText_copy(t->text);
    sfText_setString(t->text5, "SKIP");
    sfText_setFont(t->text5, t->font);
    sfText_setPosition(t->text5, set_position(1025, 35));
    sfText_setCharacterSize(t->text5, 40);
}

static	void	text_how(text_t *t)
{
    t->how1 = sfText_copy(t->text);
    sfText_setString(t->how1, \
    "Use arrows to move UP, RIGHT, DOWN, LEFT!");
    sfText_setPosition(t->how1, set_position(300, 250));
    sfText_setColor(t->how1, sfMagenta);
    t->how2 = sfText_copy(t->how1);
    sfText_setString(t->how2, \
    "While playing you can\ncheck inventory menu");
    sfText_setPosition(t->how2, set_position(100, 390));
    t->how3 = sfText_copy(t->how1);
    sfText_setString(t->how3, \
    "You can pause the game\nby pressing ESC");
    sfText_setPosition(t->how3, set_position(600, 390));
    t->how4 = sfText_copy(t->how1);
    sfText_setString(t->how4, \
    "You can check what npc-s will tell you if\nyou are in black tiles");
    sfText_setPosition(t->how4, set_position(250, 490));
    text_of_how(t);
}

text_t	*text(void)
{
    text_t	*t = malloc(sizeof(text_t));

    t->font = sfFont_createFromFile("font/tx.ttf");
    t->text = sfText_create();
    sfText_setString(t->text, "HOW TO PLAY");
    sfText_setFont(t->text, t->font);
    sfText_setColor(t->text, sfWhite);
    sfText_setPosition(t->text, set_position(490, 545));
    sfText_setCharacterSize(t->text, 35);
    t->text2 = sfText_copy(t->text);
    sfText_setString(t->text2, "QUIT");
    sfText_setFont(t->text2, t->font);
    sfText_setPosition(t->text2, set_position(540, 835));
    sfText_setCharacterSize(t->text2, 50);
    set_text(t);
    text_how(t);
    return (t);
}
