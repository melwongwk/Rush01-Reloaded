/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 12:36:40 by melwong           #+#    #+#             */
/*   Updated: 2026/07/27 09:29:50 by melwong          ###   ########.fr       */
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

/* utils.c */

bool	ft_isspace(char c);
bool	ft_isdigit(char c);
int		ft_strlen(char *str);

/* input.c */

int		parse_input(char *str, t_game *game);

/* validation.c */

int		can_place(t_game *game, int row, int col, int num);

/* visibility.c */

int		count_from_left(t_game *game, int row);
int		count_from_right(t_game *game, int row);
int		count_from_top(t_game *game, int col);
int		count_from_bottom(t_game *game, int col);


/* clues.c */

int		check_row(t_game *game, int row);
int		check_col(t_game *game, int col);

/* solver.c */

int		solve(t_game *game);

/* output.c */

void	print_grid(t_game *game);
void	print_error(void);

#endif
