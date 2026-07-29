/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clue_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 18:13:09 by melwong           #+#    #+#             */
/*   Updated: 2026/07/29 18:13:13 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

bool	validate_clues(t_game *game)
{
	int	i;
	int	clue;

	i = 0;
	while (i < 16)
	{
		clue = game->clues[i];
		if (clue < 1 || clue > 4)
			return (false);
		i++;
	}
	return (true);
}
