/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 09:03:08 by melwong           #+#    #+#             */
/*   Updated: 2026/07/29 10:22:36 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_game
{
	int	clues[16];
	int	grid[4][4];
}	t_game;

bool	ft_isspace(char c);
bool	ft_isdigit(char c);
int		ft_strlen(char *str);

bool	validate_clues(t_game *game);

int		count_from_left(t_game *game, int row);
int		count_from_right(t_game *game, int row);
int		count_from_top(t_game *game, int col);
int		count_from_bottom(t_game *game, int col);

bool	check_col(t_game *game, int col);
bool	check_row(t_game *game, int row);

int		can_place(t_game *game, int row, int col, int num);

int		solve(t_game *game);

#endif
