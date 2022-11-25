#include "../include/window.h"

int main()
{
    t_win   window;
    t_imgl  image;

    window = new_program(1000, 1000, "WHY SO LONG????\n");
    if (!window.win_ptr)
        return (1);
    image = new_image(1000, 1000, window);
    /* Put white pixel */
	put_pixel_img(image, 150, 150, 0x00FFFFFF);
	mlx_put_image_to_window (image.win.mlx_ptr, image.win.win_ptr, image.img_ptr, 0, 0);
    //
    mlx_hook(window.win_ptr, 17, 0, exit_game, &window);
    mlx_loop(window.mlx_ptr);
    return (0);
}
/*
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

t_imgl	new_image(int w, int h, t_win window)
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

void	put_pixel_img(t_imgl img, int x, int y, int color)
{
	char	*dst;

	dst = img.addr + (y * img.line_len + x * (img.bpp / 8));
	*(unsigned int *) dst = color;
}

int     exit_game(t_win *window)
{
        if (window)
                mlx_destroy_window (window->mlx_ptr, window->win_ptr);
        exit(EXIT_SUCCESS);
}

void	draw_square(t_square square, t_imgl img)
{
	unsigned short int	i;
	unsigned short int	j;

	i = 0;
	while (i < square.size && i + square.y < img.h)
	{
		j = 0;
		while (j < square.size && j + square.x < img.w)
		{
			put_pixel_img(img, j + square.x, i + square.y, square.color);
			j++;
		}
		i++;
	}
}*/