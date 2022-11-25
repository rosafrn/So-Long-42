#ifndef WINDOW_H
# define WINDOW_H

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

t_win	new_program(int w, int h, char *str);
t_imgl	new_img(int w, int h, t_win window);

#endif