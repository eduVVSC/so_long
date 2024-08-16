/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_mlx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:39:34 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/08 14:23:17 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	images_to_window(t_all *data, int i, int j)
{
	while (++i < data->map.h)
	{
		j = -1;
		while (++j < (data->map.w - 1))
		{
			if (data->map.map[i][j] == '0')
				mlx_put_image_to_window(data->win.mlx, data->win.win,
					data->imgs[29].img_ptr, (j * 32), (i * 32));
			else if (data->map.map[i][j] == '1')
				put_wall(i, j, data);
			else if (data->map.map[i][j] == 'E')
				mlx_put_image_to_window(data->win.mlx, data->win.win,
					data->imgs[28].img_ptr, (j * 32), (i * 32));
			else if (data->map.map[i][j] == 'C')
				mlx_put_image_to_window(data->win.mlx, data->win.win,
					data->imgs[22].img_ptr, (j * 32), (i * 32));
			else if (data->map.map[i][j] == 'T')
				mlx_put_image_to_window(data->win.mlx, data->win.win,
					data->imgs[24].img_ptr, (j * 32), (i * 32));
			else
				player_pos(data->map.map[i][j], i, j, data);
		}
	}
	put_moves(data);
}

void	player_pos(char c, int i, int j, t_all *data)
{
	if (c == 'U')
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[6].img_ptr, (j * 32), (i * 32));
	else if (c == 'D' || c == 'P')
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[1].img_ptr, (j * 32), (i * 32));
	else if (c == 'R')
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[4].img_ptr, (j * 32), (i * 32));
	else if (c == 'L')
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[2].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_LEFT1)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[9].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_LEFT1_2)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[13].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_LEFT2)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[17].img_ptr, (j * 32), (i * 32));
	else
		player_pos2(c, i, j, data);
}

void	player_pos2(char c, int i, int j, t_all *data)
{
	if (c == MOV_LEFT2_2)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[20].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_UP1)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[25].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_UP1_2)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[27].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_UP2)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[30].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_UP2_2)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[31].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_DOWN1)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[32].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_DOWN1_2)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[33].img_ptr, (j * 32), (i * 32));
	else
		player_pos3(c, i, j, data);
}

void	player_pos3(char c, int i, int j, t_all *data)
{
	if (c == MOV_DOWN2)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[34].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_DOWN2_2)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[35].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_RIGHT1)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[36].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_RIGHT1_2)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[37].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_RIGHT2)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[38].img_ptr, (j * 32), (i * 32));
	else if (c == MOV_RIGHT2_2)
		mlx_put_image_to_window(data->win.mlx, data->win.win,
			data->imgs[39].img_ptr, (j * 32), (i * 32));
}

void	put_wall(int i, int j, t_all *data)
{
	int	count;

	count = 0;
	if (i == 0)
		count += 5;
	else if (data->map.map[i - 1][j] != '1')
		count += 5;
	if (i == (data->map.h - 1))
		count += 11;
	else if (data->map.map[i + 1][j] != '1')
		count += 11;
	if (j == 0)
		count += 3;
	else if (data->map.map[i][j - 1] != '1')
		count += 3;
	if (data->map.map[i][j + 1] != '1')
		count += 7;
	mlx_put_image_to_window(data->win.mlx, data->win.win,
		data->imgs[count].img_ptr, (j * 32), (i * 32));
}
