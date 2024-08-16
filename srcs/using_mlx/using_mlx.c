/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   using_mlx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:02:46 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/07 10:07:13 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	handle_events(t_all *data)
{
	data->win.mlx = mlx_init();
	if (data->win.mlx == NULL)
		return ;
	data->win.win = mlx_new_window(data->win.mlx, ((data->map.w - 1) * 32),
			(data->map.h * 32), "So_long");
	if (data->win.win == NULL)
	{
		mlx_destroy_display(data->win.mlx);
		free(data->win.mlx);
		return ;
	}
	alocate_images(data);
	images_to_window(data, -1);
	mlx_key_hook(data->win.win, &movements, data);
	mlx_hook(data->win.win, DestroyNotify, 0L, &close_n_clean, data);
	mlx_loop(data->win.mlx);
	close_n_clean(data);
}
