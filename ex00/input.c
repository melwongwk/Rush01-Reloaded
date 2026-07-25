/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:43:42 by melwong           #+#    #+#             */
/*   Updated: 2026/07/24 16:43:43 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	check_format(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
		if (!str[i])
			break ;
		if (!ft_isspace(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static void	extract_clues(char *str, int *clues)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			clues[j++] = str[i] - '0';
		i++;
	}
}

static int	validate_clues(int *clues)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (clues[i] < 1 || clues[i] > GRID_SIZE)
			return (0);
		i++;
	}
	return (1);
}

int	parse_input(char *str, t_game *game)
{
	if (ft_strlen(str) != INPUT_LEN)
		return (0);
	if (!check_format(str))
		return (0);
	extract_clues(str, game->clues);
	if (!validate_clues(game->clues))
		return (0);
	return (1);
}
