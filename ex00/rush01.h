/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 09:03:08 by melwong           #+#    #+#             */
/*   Updated: 2026/07/24 09:54:41 by melwong          ###   ########.fr       */
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

#endif
