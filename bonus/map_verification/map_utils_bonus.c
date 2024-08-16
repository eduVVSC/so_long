/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:51:57 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/06 15:07:12 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

int	free_error_int(char **map, int index, int h)
{
	int	i;

	i = -1;
	while (++i < h)
		free(map[i]);
	free(map);
	if (index == 4)
		return (4);
	return (1);
}

char	**free_error_char(char **map)
{
	int	i;

	i = 0;
	while (map[i] != 0)
	{
		free (map[i]);
		i++;
	}
	return (NULL);
}

int	check_characters(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '1' && str[i] != '0' && str[i] != 'P'
			&& str[i] != 'C' && str[i] != 'E' && str[i] != '\n'
			&& str[i] != 'T')
			return (1);
		i++;
	}
	return (0);
}

char	**dupmap(t_all *data)
{
	char	**duplicated_map;
	int		i;

	i = -1;
	duplicated_map = (char **)malloc(sizeof(char *) * data->map.h + 1);
	if (!duplicated_map)
		return (free_error_char(duplicated_map));
	while (++i < data->map.h)
		duplicated_map[i] = ft_strdup(data->map.map[i]);
	return (duplicated_map);
}

void	search_npc(char *str, int height, t_all *data)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == 'P')
		{
			data->player.x = i;
			data->player.y = height;
		}
		else if (str[i] == 'E')
		{
			data->map.exit_x = i;
			data->map.exit_y = height;
		}
		if (str[i] == 'C')
			data->map.many_colect++;
		i++;
	}
}
