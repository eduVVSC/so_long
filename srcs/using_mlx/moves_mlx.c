/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iteraction_mlx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:32:48 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/05 16:12:59 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	movements(int keycode, t_all *data)
{
	if (keycode == XK_Escape)
		close_n_clean(data);
	else if (keycode == XK_w || keycode == XK_Up)
		data->player.moves += move_up(data);
	else if (keycode == XK_a || keycode == XK_Left)
		data->player.moves += move_left(data);
	else if (keycode == XK_s || keycode == XK_Down)
		data->player.moves += move_down(data);
	else if (keycode == XK_d || keycode == XK_Right)
		data->player.moves += move_right(data);
	images_to_window(data, -1);
	ft_printf("Moves: %d\n", data->player.moves);
	return (0);
}

int	move_left(t_all *data)
{
	if (data->map.map[data->player.y][data->player.x - 1] == '0' )
	{
		data->map.map[data->player.y][data->player.x - 1] = 'P';
		data->map.map[data->player.y][data->player.x] = '0';
		data->player.x--;
		return (1);
	}
	else if (data->map.map[data->player.y][data->player.x - 1] == 'C')
	{
		data->map.map[data->player.y][data->player.x - 1] = 'P';
		data->map.map[data->player.y][data->player.x] = '0';
		data->player.x--;
		data->map.many_colect--;
		return (1);
	}
	else if (data->map.map[data->player.y][data->player.x - 1] == 'E'
			&& data->map.many_colect == 0)
		close_n_clean(data);
	return (0);
}

int	move_right(t_all *data)
{
	if (data->map.map[data->player.y][data->player.x + 1] == '0' )
	{
		data->map.map[data->player.y][data->player.x + 1] = 'P';
		data->map.map[data->player.y][data->player.x] = '0';
		data->player.x++;
		return (1);
	}
	else if (data->map.map[data->player.y][data->player.x + 1] == 'C')
	{
		data->map.map[data->player.y][data->player.x + 1] = 'P';
		data->map.map[data->player.y][data->player.x] = '0';
		data->player.x++;
		data->map.many_colect--;
		return (1);
	}
	else if (data->map.map[data->player.y][data->player.x + 1] == 'E'
			&& data->map.many_colect == 0)
		close_n_clean(data);
	return (0);
}

int	move_up(t_all *data)
{
	if (data->map.map[data->player.y - 1][data->player.x] == '0' )
	{
		data->map.map[data->player.y - 1][data->player.x] = 'P';
		data->map.map[data->player.y][data->player.x] = '0';
		data->player.y--;
		return (1);
	}
	else if (data->map.map[data->player.y - 1][data->player.x] == 'C')
	{
		data->map.map[data->player.y - 1][data->player.x] = 'P';
		data->map.map[data->player.y][data->player.x] = '0';
		data->player.y--;
		data->map.many_colect--;
		return (1);
	}
	else if (data->map.map[data->player.y - 1][data->player.x] == 'E'
				&& data->map.many_colect == 0)
		close_n_clean(data);
	return (0);
}

int	move_down(t_all *data)
{
	if (data->map.map[data->player.y + 1][data->player.x] == '0' )
	{
		data->map.map[data->player.y + 1][data->player.x] = 'P';
		data->map.map[data->player.y][data->player.x] = '0';
		data->player.y++;
		return (1);
	}
	else if (data->map.map[data->player.y + 1][data->player.x] == 'C')
	{
		data->map.map[data->player.y + 1][data->player.x] = 'P';
		data->map.map[data->player.y][data->player.x] = '0';
		data->player.y++;
		data->map.many_colect--;
		return (1);
	}
	else if (data->map.map[data->player.y + 1][data->player.x] == 'E'
			&& data->map.many_colect == 0)
		close_n_clean(data);
	return (0);
}
