/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 09:01:04 by melwong           #+#    #+#             */
/*   Updated: 2026/07/23 09:06:21 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static bool	is_all_digits_and_space(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (!ft_isdigit(c) && !ft_isspace(c))
			return (false);
		i++;
	}
	return (true);
}

int	main(int ac, char **av)
{
	if (ac != 2 || is_all_digits_and_space(av[1]) == false)
	{
		ft_putendl_fd("Error", STDERR_FILENO);
		return (EXIT_FAILURE);
	}
}
