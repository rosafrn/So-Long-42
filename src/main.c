#include "../include/minilibx-linux/mlx.h"
#include "../include/minilibx-linux/mlx_int.h"
#include "../include/libft/libft.h"
#include "../include/window.h"
#include <stdio.h>

int main ()
{
    void    *mlx_ptr;
    void    *win_ptr;

    mlx_ptr = mlx_init();
    if (!mlx_ptr)
        return (1);
    win_ptr = mlx_new_window(mlx_ptr, 300, 300, "so_long");
    if (!win_ptr)
        return (2);
    mlx_loop(mlx_ptr);
    return (0);
}

/*t_win new_program(int w, int h, char *str)
{
	void	*mlx_ptr;

	mlx_ptr = mlx_init();
	return ((t_win) {mlx_ptr, mlx_new_window(mlx_ptr, w, h, str), w, h});
}*/