/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_mlx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:27:44 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/08 14:25:06 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	clean_images(t_all *data)
{
	int	i;

	i = -1;
	while (++i < 41)
		mlx_destroy_image(data->win.mlx, data->imgs[i].img_ptr);
}

int	close_n_clean(t_all *data)
{
	clean_images(data);
	mlx_destroy_window(data->win.mlx, data->win.win);
	mlx_destroy_display(data->win.mlx);
	free (data->win.mlx);
	free_error_int(data->map.map, 0, data->map.h);
	exit (EXIT_SUCCESS);
}

void	put_moves(t_all *data)
{
	int		str_x;
	char	*num;

	num = ft_itoa(data->player.moves);
	if (data->map.w < 5)
		str_x = 10;
	else
		str_x = ((data->map.w / 2) * 32) - 100;
	mlx_string_put(data->win.mlx, data->win.win, str_x, 20, 3, "Moves:");
	mlx_string_put(data->win.mlx, data->win.win, (str_x + 50), 20, 3, num);
	free(num);
}

void	you_lost(t_all *data)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= ((data->map.h + 1) * 32))
	{
		j = -1;
		while (++j <= ((data->map.w) * 32))
			mlx_pixel_put(data->win.mlx, data->win.win, j, i, 0);
	}
	mlx_put_image_to_window(data->win.mlx, data->win.win,
		data->imgs[40].img_ptr, (((data->map.w - 1) * 16)
			- (data->imgs[40].w / 2)), (((data->map.h - 1) * 16)
			- (data->imgs[40].h / 2)));
	mlx_do_sync(data->win.mlx);
	usleep(5000000);
	close_n_clean(data);
}
