/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:04:01 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/08 14:27:33 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_BONUS_H
# define STRUCTS_BONUS_H

//---------------Position of player----------//
typedef struct t_player
{
	int	moves;
	int	x;
	int	y;
}				t_player;

//--------------Infos do mapa----------------//
typedef struct s_map
{
	char	**map;
	int		w;
	int		h;
	int		many_colect;
	int		exit_x;
	int		exit_y;
}				t_map;

//---------------Struct Img---------------//
typedef struct s_imgs
{
	void	*img_ptr;
	char	*img_pixels_ptr;
	int		w;
	int		h;
	int		bits_per_pixel;
	int		endian;
	int		line_len;
}				t_imgs;

//---------------Struct window---------------//
typedef struct s_win
{
	void	*mlx;
	void	*win;
}		t_win;

//---------------Struct Geral---------------//
typedef struct s_all
{
	t_win		win;
	t_imgs		imgs[41];
	t_player	player;
	t_map		map;
}			t_all;

#endif
