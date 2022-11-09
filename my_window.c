/*
** EPITECH PROJECT, 2022
** my_window
** File description:
** day13
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfEvent event;
    window = sfRenderWindow_create(mode, "window", sfResize | sfClose, NULL);
    if (!window)
        return 84;
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event));
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return 0;
}
