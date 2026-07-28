/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:43:47 by melwong           #+#    #+#             */
/*   Updated: 2026/07/24 16:43:48 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int ac, char **av)
{
	t_game	game;

	if (ac != 2)
	{
		print_error();
		return (0);
	}
	if (!parse_input(av[1], &game))
	{
		print_error();
		return (0);
	}
	if (!solve(&game))
	{
		print_error();
		return (0);
	}
	print_grid(&game);
	return (0);
}
