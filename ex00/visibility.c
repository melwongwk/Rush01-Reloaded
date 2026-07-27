/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 09:18:15 by melwong           #+#    #+#             */
/*   Updated: 2026/07/27 09:18:35 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	count_from_left(t_game *game, int row)
{
	int	i;
	int	max;
	int	count;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (game->grid[row][i] > max)
		{
			max = game->grid[row][i];
			count++;
		}
		i++;
	}
	return (count);
}

int	count_from_right(t_game *game, int row)
{
	int	i;
	int	max;
	int	count;

	max = 0;
	count = 0;
	i = 3;
	while (i >= 0)
	{
		if (game->grid[row][i] > max)
		{
			max = game->grid[row][i];
			count++;
		}
		i--;
	}
	return (count);
}

int	count_from_top(t_game *game, int col)
{
	int	i;
	int	max;
	int	count;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (game->grid[i][col] > max)
		{
			max = game->grid[i][col];
			count++;
		}
		i++;
	}
	return (count);
}

int	count_from_bottom(t_game *game, int col)
{
	int	i;
	int	max;
	int	count;

	max = 0;
	count = 0;
	i = 3;
	while (i >= 0)
	{
		if (game->grid[i][col] > max)
		{
			max = game->grid[i][col];
			count++;
		}
		i--;
	}
	return (count);
}
