/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:50:04 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/08 11:08:02 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "structs_bonus.h"
# include "../srcs/libs/libft/libft.h"
# include "../srcs/libs/ft_printf/ft_printf.h"
# include "../srcs/libs/gnl/get_next_line.h"
# include "../minilibx-linux/mlx.h"
# include "../minilibx-linux/mlx_int.h"
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# ifndef SO_LONG_H
#  define MOV_LEFT1 'G'
#  define MOV_LEFT1_2 'I'
#  define MOV_LEFT2 'H'
#  define MOV_LEFT2_2 'J'
#  define MOV_RIGHT1  'A'
#  define MOV_RIGHT1_2  'V'
#  define MOV_RIGHT2  'B'
#  define MOV_RIGHT2_2  'F'
#  define MOV_UP1  'K'
#  define MOV_UP1_2  'M'
#  define MOV_UP2  'W'
#  define MOV_UP2_2  'N'
#  define MOV_DOWN1  'Z'
#  define MOV_DOWN1_2  'X'
#  define MOV_DOWN2  'Y'
#  define MOV_DOWN2_2  'S'
# endif

void	anim_right1(t_all *data, char c);
void	anim_right2(t_all *data, char c);

void	you_lost(t_all *data);
void	put_moves(t_all *data);
void	busy_wait(int seconds);
void	clean_images(t_all *data);
void	alocate_wall(t_all *data);
void	handle_events(t_all *data);
void	alocate_images(t_all *data);
void	anim_up(t_all *data, char c);
void	anim_down(t_all *data, char c);
void	anim_left(t_all *data, char c);
void	anim_right(t_all *data, char c);
void	alocating_player1(t_all *data);
void	alocating_player2(t_all *data);
void	put_wall(int i, int j, t_all *data);
void	images_to_window(t_all *data, int i, int j);
void	player_pos(char c, int i, int j, t_all *data);
void	player_pos2(char c, int i, int j, t_all *data);
void	player_pos3(char c, int i, int j, t_all *data);
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
