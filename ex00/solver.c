/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:44:23 by melwong           #+#    #+#             */
/*   Updated: 2026/07/24 16:44:24 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	can_place(t_game *game, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (game->grid[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < row)
	{
		if (game->grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

static int	solve_rec(t_game *game, int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos == GRID_SIZE * GRID_SIZE)
		return (1);
	row = pos / GRID_SIZE;
	col = pos % GRID_SIZE;
	num = 1;
	while (num <= GRID_SIZE)
	{
		if (can_place(game, row, col, num))
		{
			game->grid[row][col] = num;
			if ((col != GRID_SIZE - 1 || check_row(game, row))
				&& (row != GRID_SIZE - 1 || check_col(game, col)))
			{
				if (solve_rec(game, pos + 1))
					return (1);
			}
			game->grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	solve(t_game *game)
{
	return (solve_rec(game, 0));
}
