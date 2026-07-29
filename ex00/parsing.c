/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meichan <meichan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:01:43 by meichan           #+#    #+#             */
/*   Updated: 2026/07/29 18:20:53 by meichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	parse_input(char *str, t_game *game);
void	print_grid(t_game *game);
void	print_error(void);

void	parse_input(char *str, t_game *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 15 && j <= 31)
	{
		game->clues[i] = str[j] - 48;
		i++;
		j += 2;
	};
}

void	print_grid(t_game *game)
{
	int		r;
	int		c;
	char	alp;

	r = 0;
	while (r <= 3)
	{
		c = 0;
		while (c <= 3)
		{
			alp = game->grid[r][c] + 48;
			write (1, &alp, 1);
			c++;
			if (c < 3)
				write (1, " ", 1);
		}
		write (1, "\n", 1);
		r++;
	}
}

void	print_error(void)
{
	write (1, "Error\n", 6);
}
