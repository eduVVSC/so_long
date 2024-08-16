/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_mlx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:32:48 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/08 13:40:03 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

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
	return (0);
}

int	move_left(t_all *data)
{
	if (data->map.map[data->player.y][data->player.x - 1] == '0' )
	{
		anim_left(data, '0');
		data->player.x--;
		return (1);
	}
	else if (data->map.map[data->player.y][data->player.x - 1] == 'C')
	{
		anim_left(data, 'C');
		data->player.x--;
		data->map.many_colect--;
		return (1);
	}
	else if (data->map.map[data->player.y][data->player.x - 1] == 'E'
			&& data->map.many_colect == 0)
		close_n_clean(data);
	else if (data->map.map[data->player.y][data->player.x - 1] == 'T')
		you_lost(data);
	return (0);
}

int	move_right(t_all *data)
{
	if (data->map.map[data->player.y][data->player.x + 1] == '0' )
	{
		anim_right(data, '0');
		data->player.x++;
		return (1);
	}
	else if (data->map.map[data->player.y][data->player.x + 1] == 'C')
	{
		anim_right(data, 'C');
		data->player.x++;
		data->map.many_colect--;
		return (1);
	}
	else if (data->map.map[data->player.y][data->player.x + 1] == 'E'
			&& data->map.many_colect == 0)
		close_n_clean(data);
	else if (data->map.map[data->player.y][data->player.x + 1] == 'T')
		you_lost(data);
	return (0);
}

int	move_up(t_all *data)
{
	if (data->map.map[data->player.y - 1][data->player.x] == '0' )
	{
		anim_up(data, '0');
		data->player.y--;
		return (1);
	}
	else if (data->map.map[data->player.y - 1][data->player.x] == 'C')
	{
		anim_up(data, 'C');
		data->player.y--;
		data->map.many_colect--;
		return (1);
	}
	else if (data->map.map[data->player.y - 1][data->player.x] == 'E'
				&& data->map.many_colect == 0)
		close_n_clean(data);
	else if (data->map.map[data->player.y - 1][data->player.x] == 'T')
		you_lost(data);
	return (0);
}

int	move_down(t_all *data)
{
	if (data->map.map[data->player.y + 1][data->player.x] == '0')
	{
		anim_down(data, '0');
		data->player.y++;
		return (1);
	}
	else if (data->map.map[data->player.y + 1][data->player.x] == 'C')
	{
		anim_down(data, 'C');
		data->player.y++;
		data->map.many_colect--;
		return (1);
	}
	else if (data->map.map[data->player.y + 1][data->player.x] == 'E'
			&& data->map.many_colect == 0)
		close_n_clean(data);
	else if (data->map.map[data->player.y + 1][data->player.x] == 'T')
		you_lost(data);
	return (0);
}
