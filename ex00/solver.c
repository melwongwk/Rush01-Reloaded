/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:44:23 by melwong           #+#    #+#             */
/*   Updated: 2026/07/27 09:13:13 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static void	get_next_cell(int row, int col, int *next_row, int *next_col)
{
	*next_row = row;
	*next_col = col + 1;
	if (*next_col == 4)
	{
		*next_row = row + 1;
		*next_col = 0;
	}
}

static int	placement_is_valid(t_game *game, int row, int col)
{
	if (col == 3 && !check_row(game, row))
		return (0);
	if (row == 3 && !check_col(game, col))
		return (0);
	return (1);
}

static int	solve_rec(t_game *game, int row, int col)
{
	int	num;
	int	next_row;
	int	next_col;

	if (row == 4)
		return (1);
	get_next_cell(row, col, &next_row, &next_col);
	num = 1;
	while (num <= 4)
	{
		if (can_place(game, row, col, num))
		{
			game->grid[row][col] = num;
			if (placement_is_valid(game, row, col))
			{
				if (solve_rec(game, next_row, next_col))
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
	return (solve_rec(game, 0, 0));
}
