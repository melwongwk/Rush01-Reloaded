/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 09:01:04 by melwong           #+#    #+#             */
/*   Updated: 2026/07/23 19:45:35 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

static bool	check_format_and_len(char* str)
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
		if (!ft_isspace(str[i]))
		{
			correct = false;
			break ;
		}
		i++;
	}
	if (i != 31)
		correct = false;
	return (correct);
}

int	main(int ac, char **av)
{
	if (ac != 2 || check_format_and_len(av[1]) == false)
	{
		write(2, "Error\n", 6);
		return (EXIT_FAILURE);
	}
	return (0);
}
