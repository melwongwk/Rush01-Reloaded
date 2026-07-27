/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:44:39 by melwong           #+#    #+#             */
/*   Updated: 2026/07/26 12:38:00 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_grid(t_game *game)
{
	int		row;
	int		col;
	char	buf[2];

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			buf[0] = '0' + game->grid[row][col];
			if (col == 3)
				buf[1] = '\n';
			else
				buf[1] = ' ';
			write(1, buf, 2);
			col++;
		}
		row++;
	}
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}
