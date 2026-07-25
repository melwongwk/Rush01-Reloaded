/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:44:47 by melwong           #+#    #+#             */
/*   Updated: 2026/07/24 16:44:48 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	is_valid_set(int *values)
{
	int	seen[GRID_SIZE + 1];
	int	i;

	i = 0;
	while (i <= GRID_SIZE)
		seen[i++] = 0;
	i = 0;
	while (i < GRID_SIZE)
	{
		if (values[i] < 1 || values[i] > GRID_SIZE || seen[values[i]])
			return (0);
		seen[values[i]] = 1;
		i++;
	}
	return (1);
}

int	check_row(t_game *game, int row)
{
	if (!is_valid_set(game->grid[row]))
		return (0);
	if (count_from_left(game, row) != game->clues[8 + row])
		return (0);
	if (count_from_right(game, row) != game->clues[12 + row])
		return (0);
	return (1);
}

int	check_col(t_game *game, int col)
{
	int	values[GRID_SIZE];
	int	i;

	i = 0;
	while (i < GRID_SIZE)
	{
		values[i] = game->grid[i][col];
		i++;
	}
	if (!is_valid_set(values))
		return (0);
	if (count_from_top(game, col) != game->clues[col])
		return (0);
	if (count_from_bottom(game, col) != game->clues[4 + col])
		return (0);
	return (1);
}
