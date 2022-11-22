#include "../include/minilibx-linux/mlx.h"
#include "../include/minilibx-linux/mlx_int.h"
#include "../include/libft/libft.h"
#include "../include/window.h"
#include <stdio.h>

int main()
{
    void    *win_ptr;

    win_ptr = NULL;
    win_ptr = new_program(300, 300, "so_long");
    return (0);
}

void *new_program(int w, int h, char *str)
{
	void    *mlx_ptr;
    void    *win_ptr;

    mlx_ptr = mlx_init();
    if (!mlx_ptr)
        return (NULL);
    win_ptr = mlx_new_window(mlx_ptr, w, h, str);
    if (!win_ptr)
        return (NULL);
    mlx_loop(mlx_ptr);
    return (win_ptr);
}