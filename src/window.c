#include "../include/window.h"

t_win new_program(int w, int h, char *str)
{
	t_win window;

    window.mlx_ptr = mlx_init();
    if (!window.mlx_ptr)
        return (window);
    window.win_ptr = mlx_new_window(window.mlx_ptr, w, h, str);
    if (!window.win_ptr)
        return (window);
    return (window);
}

//HOOKERS LIST

int     exit_game(t_win *window)
{
        if (window)
                mlx_destroy_window (window->mlx_ptr, window->win_ptr);
        exit(EXIT_SUCCESS);
}