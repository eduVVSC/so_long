/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:33:31 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/07 10:10:42 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	handle_input(t_all *data, int index)
{
	(void) data;
	if (index == 0)
		handle_events(data);
	else if (index == 6)
		ft_printf("ERROR!\nYou gave me a bad arquive!!!!!\n");
	else if (index == 1)
		ft_printf("ERROR!\nYou gave me a map with Bad characters or length\n");
	else
	{
		ft_printf("ERROR!\n");
		if (index == 2)
			ft_printf("You gave me a Open map! Can't play this shit!\n");
		else if (index == 3)
			ft_printf("You gave me a bad quantity of charcters\n");
		else if (index == 4)
			ft_printf("How do you want me to play an IMPOSSIBLE map?\n");
		else if (index == 5)
			ft_printf("Some shitty thing happend to malloc!?!\n");
		free_error_int(data->map.map, 0, data->map.h);
	}
}

int	main(int ac, char **av)
{
	int		index;
	int		len;
	t_all	data;

	if (ac == 1)
		ft_printf("You need to give A file!\n");
	else if (ac > 2)
		ft_printf("You need to give ONE file!\n");
	else if (ac == 2)
	{
		len = ft_strlen(av[1]);
		if (av[1][len - 4] != '.' || av[1][len - 3] != 'b' ||
				av[1][len - 2] != 'e' || av[1][len - 1] != 'r')
			return (ft_printf("not .ber"));
		index = map_check_full(av[1], &data);
		handle_input(&data, index);
	}
	return (0);
}
