/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 09:35:57 by melwong           #+#    #+#             */
/*   Updated: 2026/07/26 09:39:12 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static void	solve_rec_helper(int *next_row, int *next_col, int row, int col)
{
	*next_row = row;
	*next_col = col + 1;
	if (*next_col == 4)
	{
		*next_row = row + 1;
		*next_col = 0;
	}
}

static int	solve_rec(t_game *game, int row, int col)
{
	int	num;
	int	next_row;
	int	next_col;

	if (row == 4)
		return (1);
	solve_rec_helper(&next_row, &next_col, row, col);
	num = 1;
	while (num <= 4)
	{
		if (can_place(game, row, col, num))
		{
			game->grid[row][col] = num;
			if ((col != 3 || check_row(game, row))
				&& (row != 3 || check_col(game, col)))
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
