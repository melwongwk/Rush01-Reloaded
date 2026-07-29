/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clue_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:19:23 by timmtan           #+#    #+#             */
/*   Updated: 2026/07/29 10:21:58 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

bool	check_row(t_game *game, int row)
{
	if (game->clues[row + 8] != count_from_left(game, row))
		return (0);
	if (game->clues[row + 12] != count_from_right(game, row))
		return (0);
	return (1);
}

bool	check_col(t_game *game, int col)
{
	if (game->clues[col] != count_from_top(game, col))
		return (0);
	if (game->clues[col + 4] != count_from_bottom(game, col))
		return (0);
	return (1);
}
