/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 19:39:57 by melwong           #+#    #+#             */
/*   Updated: 2026/07/28 19:40:04 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	row_has_num(t_game *game, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (game->grid[row][i] == num)
			return (1);
		i++;
	}
	return (0);
}

static int	col_has_num(t_game *game, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (game->grid[i][col] == num)
			return (1);
		i++;
	}
	return (0);
}

int	can_place(t_game *game, int row, int col, int num)
{
	if (row_has_num(game, row, col, num))
		return (0);
	if (col_has_num(game, row, col, num))
		return (0);
	return (1);
}
