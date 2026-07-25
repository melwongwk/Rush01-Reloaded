/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 09:01:04 by melwong           #+#    #+#             */
/*   Updated: 2026/07/25 23:16:08 by meichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static bool	check_format_and_len(char *str)
{
	int		i;
	bool	correct;

	correct = true;
	i = 0;
	while (str[i])
	{
		if ((!ft_isdigit(str[i])) || (!ft_isspace(str[i])))
		{
			correct = false;
			print_error();
			break ;
		}
		i++;
		if (!str[i])
		{
			print_error();
			break ;
		}
	}
	if (i != 31)
	{
		correct = false;
		print_error();
	}
	return (correct);
}

int	main(int ac, char **av)
{
	if (ac != 2 || check_format_and_len(av[1]) == false)
	{
		print_error();
		return (0);
	}
	return (0);
}
