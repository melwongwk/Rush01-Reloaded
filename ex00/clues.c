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
#include <stdbool.h>

bool	check_row(t_game *game, int row)
{
	int	count;

	count = count_from_left(game, row);
	if (count != game->clues[8 + row])
		return (false);
	count = count_from_right(game, row);
	if (count != game->clues[12 + row])
		return (false);
	return (true);
}

bool	check_col(t_game *game, int col)
{
	int	count;

	count = count_from_top(game, col);
	if (count != game->clues[col])
		return (0);
	count = count_from_bottom(game, col);
	if (count != game->clues[4 + col])
		return (0);
	return (1);
}
