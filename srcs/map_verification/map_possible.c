/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_possible.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:59:18 by dinaacre          #+#    #+#             */
/*   Updated: 2024/08/05 14:15:35 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	search_to_change(char c)
{
	char	*str;
	int		i;

	i = 0;
	str = "0CE";
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	check_close_places(char **map, int l_p, int h_p)
{
	int	changes;

	changes = 0;
	if (search_to_change(map[h_p][l_p + 1]) == 0)
	{
		map[h_p][l_p + 1] = '2';
		changes++;
	}
	if (search_to_change(map[h_p][l_p - 1]) == 0)
	{
		map[h_p][l_p - 1] = '2';
		changes++;
	}
	if (search_to_change(map[h_p + 1][l_p]) == 0)
	{
		map[h_p + 1][l_p] = '2';
		changes++;
	}
	if (search_to_change(map[h_p - 1][l_p]) == 0)
	{
		map[h_p - 1][l_p] = '2';
		changes++;
	}
	return (changes);
}

int	scanning(char **map, t_all *data)
{
	int	changes;
	int	i;
	int	j;

	i = 1;
	j = 1;
	changes = 0;
	while (i < data->map.h)
	{
		while (j < data->map.w)
		{
			if (map[i][j] == '2')
				changes += check_close_places(map, j, i);
			j++;
		}
		j = 1;
		i++;
	}
	return (changes);
}

int	final_check(char **map, int height, int length)
{
	int	i;

	i = 0;
	while (height >= 0)
	{
		while (++i < length)
			if (map[height][i] != '1' && map[height][i] != '2')
				return (1);
		height--;
		i = 0;
	}
	return (0);
}

int	check_possible(char **map, t_all *data)
{
	int	changes;
	int	j;
	int	i;

	i = -1;
	j = 0;
	changes = 1;
	while (map[++i] != 0)
	{
		while (map[i][++j] != 0)
			if (map[i][j] == 'P')
				break ;
		if (map[i][j] == 'P')
			break ;
		j = 0;
	}
	map[i][j] = '2';
	while (changes != 0)
		changes = scanning(map, data);
	if (final_check(map, (data->map.h - 1), (data->map.w - 1)) == 1)
		return (1);
	return (0);
}
