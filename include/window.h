#ifndef WINDOW_H
# define WINDOW_H

typedef struct s_winn
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		height;
	int		width;
}		t_winn;

typedef struct s_imgg
{
	t_winn	win;
	void	*img_ptr;
	char	*addr;
	int		h;
	int		w;
	int		bpp;
	int		endian;
	int		line_len;
}		t_imgg;

void *new_program(int w, int h, char *str);

#endif