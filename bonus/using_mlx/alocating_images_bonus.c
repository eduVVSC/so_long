/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alocating_images.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:18:17 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/08 14:25:56 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	alocate_images(t_all *data)
{
	data->imgs[0].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall.xpm", &data->imgs[0].w, &data->imgs[0].h);
	data->imgs[3].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall3.xpm", &data->imgs[3].w, &data->imgs[3].h);
	data->imgs[5].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall5.xpm", &data->imgs[5].w, &data->imgs[5].h);
	data->imgs[7].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall7.xpm", &data->imgs[7].w, &data->imgs[7].h);
	data->imgs[11].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall11.xpm", &data->imgs[11].w, &data->imgs[11].h);
	data->imgs[15].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall15.xpm", &data->imgs[15].w, &data->imgs[15].h);
	data->imgs[21].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall21.xpm", &data->imgs[21].w, &data->imgs[21].h);
	data->imgs[19].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall19.xpm", &data->imgs[19].w, &data->imgs[19].h);
	data->imgs[23].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall23.xpm", &data->imgs[23].w, &data->imgs[23].h);
	alocate_wall(data);
	alocating_player1(data);
	alocating_player2(data);
}

void	alocate_wall(t_all *data)
{
	data->imgs[8].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall8.xpm", &data->imgs[8].w, &data->imgs[8].h);
	data->imgs[12].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall12.xpm", &data->imgs[12].w, &data->imgs[12].h);
	data->imgs[16].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall16.xpm", &data->imgs[16].w, &data->imgs[16].h);
	data->imgs[10].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall10.xpm", &data->imgs[10].w, &data->imgs[10].h);
	data->imgs[14].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall14.xpm", &data->imgs[14].w, &data->imgs[14].h);
	data->imgs[18].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall18.xpm", &data->imgs[18].w, &data->imgs[18].h);
	data->imgs[28].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/exit.xpm", &data->imgs[28].w, &data->imgs[28].h);
	data->imgs[29].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/open.xpm", &data->imgs[29].w, &data->imgs[29].h);
	data->imgs[26].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wall26.xpm", &data->imgs[26].w, &data->imgs[26].h);
	data->imgs[22].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/collectable.xpm", &data->imgs[22].w, &data->imgs[22].h);
	data->imgs[24].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/trap.xpm", &data->imgs[24].w, &data->imgs[24].h);
}

void	alocating_player1(t_all *data)
{
	data->imgs[40].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/wasted.xpm", &data->imgs[40].w, &data->imgs[40].h);
	data->imgs[1].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/p_down.xpm", &data->imgs[1].w, &data->imgs[1].h);
	data->imgs[2].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/p_left.xpm", &data->imgs[2].w, &data->imgs[2].h);
	data->imgs[4].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/p_right.xpm", &data->imgs[4].w, &data->imgs[4].h);
	data->imgs[6].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/p_up.xpm", &data->imgs[6].w, &data->imgs[6].h);
	data->imgs[9].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_left1.xpm", &data->imgs[9].w, &data->imgs[9].h);
	data->imgs[13].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_left1_2.xpm", &data->imgs[13].w, &data->imgs[13].h);
	data->imgs[17].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_left2.xpm", &data->imgs[17].w, &data->imgs[17].h);
	data->imgs[20].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_left2_2.xpm", &data->imgs[20].w, &data->imgs[20].h);
}

void	alocating_player2(t_all *data)
{
	data->imgs[25].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_up1.xpm", &data->imgs[25].w, &data->imgs[25].h);
	data->imgs[27].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_up1_2.xpm", &data->imgs[27].w, &data->imgs[27].h);
	data->imgs[30].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_up2.xpm", &data->imgs[30].w, &data->imgs[30].h);
	data->imgs[31].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_up2_2.xpm", &data->imgs[31].w, &data->imgs[31].h);
	data->imgs[32].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_down1.xpm", &data->imgs[32].w, &data->imgs[32].h);
	data->imgs[33].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_down1_2.xpm", &data->imgs[33].w, &data->imgs[33].h);
	data->imgs[34].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_down2.xpm", &data->imgs[34].w, &data->imgs[34].h);
	data->imgs[35].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_down2_2.xpm", &data->imgs[35].w, &data->imgs[35].h);
	data->imgs[36].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_right1.xpm", &data->imgs[36].w, &data->imgs[36].h);
	data->imgs[37].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_right1_2.xpm", &data->imgs[37].w, &data->imgs[37].h);
	data->imgs[38].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_right2.xpm", &data->imgs[38].w, &data->imgs[38].h);
	data->imgs[39].img_ptr = mlx_xpm_file_to_image(data->win.mlx,
			"textures/mov_right2_2.xpm", &data->imgs[39].w, &data->imgs[39].h);
}
