/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clue_visibility.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 20:26:06 by timmtan           #+#    #+#             */
/*   Updated: 2026/07/29 10:20:18 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	count_from_left(t_game *game, int row)
{
	int	i;
	int	max;
	int	visible;

	i = 1;
	max = game->grid[row][0];
	visible = 1;
	while (i < 4)
	{
		if (game->grid[row][i] > max)
		{
			max = game->grid[row][i];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	count_from_right(t_game *game, int row)
{
	int	i;
	int	max;
	int	visible;

	i = 2;
	max = game->grid[row][3];
	visible = 1;
	while (i >= 0)
	{
		if (game->grid[row][i] > max)
		{
			max = game->grid[row][i];
			visible++;
		}
		i--;
	}
	return (visible);
}

int	count_from_top(t_game *game, int col)
{
	int	i;
	int	max;
	int	visible;

	i = 1;
	max = game->grid[0][col];
	visible = 1;
	while (i < 4)
	{
		if (game->grid[i][col] > max)
		{
			max = game->grid[i][col];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	count_from_bottom(t_game *game, int col)
{
	int	i;
	int	max;
	int	visible;

	i = 2;
	max = game->grid[3][col];
	visible = 1;
	while (i >= 0)
	{
		if (game->grid[i][col] > max)
		{
			max = game->grid[i][col];
			visible++;
		}
		i--;
	}
	return (visible);
}
