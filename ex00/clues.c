/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 12:36:45 by melwong           #+#    #+#             */
/*   Updated: 2026/07/27 09:18:04 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_row(t_game *game, int row)
{
	if (count_from_left(game, row) != game->clues[8 + row])
		return (0);
	if (count_from_right(game, row) != game->clues[12 + row])
		return (0);
	return (1);
}

int	check_col(t_game *game, int col)
{
	if (count_from_top(game, col) != game->clues[col])
		return (0);
	if (count_from_bottom(game, col) != game->clues[4 + col])
		return (0);
	return (1);
}
