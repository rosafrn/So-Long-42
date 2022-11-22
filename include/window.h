#ifndef WINDOW_H
# define WINDOW_H

typedef struct s_win
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		height;
	int		width;
}		t_win;

#endif