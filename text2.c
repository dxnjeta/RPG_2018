/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** text
*/

#include "my.h"

static	void	text_pause(text_t *t)
{
    t->pause1 = sfText_copy(t->text);
    sfText_setString(t->pause1, "RESUME");
    sfText_setFont(t->pause1, t->font);
    sfText_setPosition(t->pause1, set_position(530, 388));
    sfText_setCharacterSize(t->pause1, 45);
    t->pause2 = sfText_copy(t->text);
    sfText_setString(t->pause2, "MENU");
    sfText_setFont(t->pause2, t->font);
    sfText_setPosition(t->pause2, set_position(540, 690));
    sfText_setCharacterSize(t->pause2, 50);
    t->pause3 = sfText_copy(t->text);
    sfText_setString(t->pause3, "QUIT");
    sfText_setFont(t->pause3, t->font);
    sfText_setPosition(t->pause3, set_position(540, 540));
    sfText_setCharacterSize(t->pause3, 50);
}

static	void	text_sett(text_t *t)
{
    text_pause(t);
    t->set1 = sfText_copy(t->how1);
    sfText_setString(t->set1, \
    "Press ESC key to go back!");
    sfText_setPosition(t->set1, set_position(370, 450));
    t->in1 = sfText_copy(t->how5);
    sfText_setString(t->in1, \
    "You have     life(s) left.");
    sfText_setPosition(t->in1, set_position(370, 450));
    sfText_setCharacterSize(t->in1, 45);
    t->in2 = sfText_copy(t->in1);
    sfText_setString(t->in2, \
    "You have found     diamonds.");
    sfText_setPosition(t->in2, set_position(370, 650));
}

static	void	text_bre(text_t *t)
{
    t->bre1 = sfText_copy(t->text);
    sfText_setString(t->bre1, \
    "Try to get 50+ coins\nPress Q to go back!");
    sfText_setPosition(t->bre1, set_position(200, 450));
    sfText_setCharacterSize(t->bre1, 45);
    t->bre2 = sfText_copy(t->text);
    sfText_setString(t->bre2, \
    "Nothing to show for now\nPress Q to go back!");
    sfText_setPosition(t->bre2, set_position(200, 450));
    sfText_setCharacterSize(t->bre2, 45);
}

void	text_of_how(text_t *t)
{
    text_bre(t);
    t->how5 = sfText_copy(t->how1);
    sfText_setString(t->how5, \
    "Press Enter key to go back!");
    sfText_setPosition(t->how5, set_position(300, 890));
    sfText_setColor(t->how5, sfWhite);
    t->how6 = sfText_copy(t->how1);
    sfText_setString(t->how6, \
    "\tYou will win when you get all three diamonds.\n\
    Try to find out how the diamonds are hidden!\n\
    Don't miss any coin, they help you a lot on\n\
    \t\t\t\t\tyour way.");
    sfText_setPosition(t->how6, set_position(10, 630));
    sfText_setCharacterSize(t->how6, 45);
    text_sett(t);
}
