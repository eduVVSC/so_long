/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:50:04 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/06 18:44:57 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "structs.h"
# include "libs/libft/libft.h"
# include "libs/ft_printf/ft_printf.h"
# include "libs/gnl/get_next_line.h"
# include "../minilibx-linux/mlx.h"
# include "../minilibx-linux/mlx_int.h"
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

void	handle_events(t_all *data);
void	clean_images(t_all *data);
void	images_to_window(t_all *data, int i);
void	alocate_images(t_all *data);
void	search_npc(char *str, int height, t_all *data);

char	**dupmap(t_all *data);
char	**free_error_char(char **map);

int		move_up(t_all *data);
int		move_down(t_all *data);
int		move_left(t_all *data);
int		move_right(t_all *data);
int		movements(int keycode, t_all *data);

int		search_to_change(char c);
int		close_n_clean(t_all *data);
int		get_size(int fd, t_all *data);
int		free_error_int(char **map, int index, int h);
int		creating_map(t_all *data, int fd);
int		scanning(char **map, t_all *data);

int		check_characters(char *str);
int		map_check_full(char *filename, t_all *data);
int		check_possible(char **map, t_all *data);
int		final_check(char **map, int height, int length);
int		check_close_places(char **map, int l_p, int h_p);
int		check_closed(char **map, int height, int length);
int		check_many_ceo(char **map, int height, int length);

#endif
