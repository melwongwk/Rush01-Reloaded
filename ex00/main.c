/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 09:01:04 by melwong           #+#    #+#             */
/*   Updated: 2026/07/23 09:47:21 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static bool	check_format(char* str)
{
	int		i;
	bool	correct;

	correct = true;
	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			correct = false;
			break ;
		}
		i++;
		if (!str[i])
			break ;
		if (!ft_is_space(str[i]))
		{
			correct = false;
			break ;
		}
		i++;
	}
	return (correct);
}

int	main(int ac, char **av)
{
	if (ac != 2 || check_format(av[1]) == false)
	{
		ft_putendl_fd("Error", STDERR_FILENO);
		return (EXIT_FAILURE);
	}
}
