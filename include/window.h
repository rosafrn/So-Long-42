#ifndef WINDOW_H
# define WINDOW_H

#include <stdio.h>
#include "../include/minilibx-linux/mlx.h"
#include "../include/minilibx-linux/mlx_int.h"
#include "../include/libft/libft.h"

typedef struct s_win
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		height;
	int		width;
}		t_win;

typedef struct s_imgl
{
	t_win	win;
	void	*img_ptr;
	char	*addr;
	int		h;
	int		w;
	int		bpp;
	int		endian;
	int		line_len;
}		t_imgl;

typedef struct s_square {
	unsigned short int	x;
	unsigned short int	y;
	unsigned short int	size;
	int					color;
}		t_square;

t_win	new_program(int w, int h, char *str);
t_imgl	new_image(int w, int h, t_win window);
void	put_pixel_img(t_imgl img, int x, int y, int color);
int     exit_game(t_win *window);
void	draw_square(t_square square, t_imgl img);

#endif