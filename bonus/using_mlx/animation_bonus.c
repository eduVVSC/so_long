/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 08:22:02 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/08 13:45:28 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	anim_up(t_all *data, char c)
{
	data->map.map[data->player.y - 1][data->player.x] = c;
	data->map.map[data->player.y][data->player.x] = 'U';
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
	data->map.map[data->player.y - 1][data->player.x] = MOV_UP2;
	data->map.map[data->player.y][data->player.x] = MOV_UP1;
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
	data->map.map[data->player.y - 1][data->player.x] = MOV_UP2_2;
	data->map.map[data->player.y][data->player.x] = MOV_UP1_2;
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
	data->map.map[data->player.y - 1][data->player.x] = 'U';
	data->map.map[data->player.y][data->player.x] = '0';
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
}

void	anim_down(t_all *data, char c)
{
	data->map.map[data->player.y + 1][data->player.x] = c;
	data->map.map[data->player.y][data->player.x] = 'D';
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
	data->map.map[data->player.y + 1][data->player.x] = MOV_DOWN2;
	data->map.map[data->player.y][data->player.x] = MOV_DOWN1;
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
	data->map.map[data->player.y + 1][data->player.x] = MOV_DOWN2_2;
	data->map.map[data->player.y][data->player.x] = MOV_DOWN1_2;
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
	data->map.map[data->player.y + 1][data->player.x] = 'D';
	data->map.map[data->player.y][data->player.x] = '0';
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
}

void	anim_left(t_all *data, char c)
{
	data->map.map[data->player.y][data->player.x - 1] = c;
	data->map.map[data->player.y][data->player.x] = 'L';
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
	data->map.map[data->player.y][data->player.x - 1] = MOV_LEFT2;
	data->map.map[data->player.y][data->player.x] = MOV_LEFT1;
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
	data->map.map[data->player.y][data->player.x - 1] = MOV_LEFT2_2;
	data->map.map[data->player.y][data->player.x] = MOV_LEFT1_2;
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
	data->map.map[data->player.y][data->player.x - 1] = 'L';
	data->map.map[data->player.y][data->player.x] = '0';
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
}

void	anim_right(t_all *data, char c)
{
	data->map.map[data->player.y][data->player.x + 1] = c;
	data->map.map[data->player.y][data->player.x] = 'R';
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
	data->map.map[data->player.y][data->player.x + 1] = MOV_RIGHT2;
	data->map.map[data->player.y][data->player.x] = MOV_RIGHT1;
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
	data->map.map[data->player.y][data->player.x + 1] = MOV_RIGHT2_2;
	data->map.map[data->player.y][data->player.x] = MOV_RIGHT1_2;
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(150000);
	data->map.map[data->player.y][data->player.x + 1] = 'R';
	data->map.map[data->player.y][data->player.x] = '0';
	images_to_window(data, -1, -1);
	mlx_do_sync(data->win.mlx);
	usleep(100000);
}
