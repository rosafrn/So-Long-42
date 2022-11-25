#include "../include/minilibx-linux/mlx.h"
#include "../include/minilibx-linux/mlx_int.h"
#include "../include/libft/libft.h"
#include "../include/window.h"
#include <stdio.h>

int main()
{
    t_win   window;
    t_imgl  imgane;

    window = new_program(300, 300, "hello\n");
    if (!window.win_ptr)
        return (1);
    imgane = new_img(4, 4, window);
    ft_memcpy(imgane.addr, "s4vfs4vfs4vfs4vfs4vfs4vfs4vfs4vfs4vfs4vfs4vfs4vfs4vfs4vfs4vfs4vf", 16*4);
    mlx_put_image_to_window (imgane.win.mlx_ptr, imgane.win.win_ptr, imgane.img_ptr, 10, 10);
    mlx_loop(window.mlx_ptr);
    return (0);
}

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

t_imgl	new_img(int w, int h, t_win window)
{
	t_imgl	image;

	image.win = window;
	image.img_ptr = mlx_new_image(window.mlx_ptr, w, h);
	image.addr = mlx_get_data_addr(image.img_ptr, &(image.bpp),
			&(image.line_len), &(image.endian));
	image.w = w;
	image.h = h;
	return (image);
}