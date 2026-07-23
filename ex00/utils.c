/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 09:04:27 by melwong           #+#    #+#             */
/*   Updated: 2026/07/23 19:44:37 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>>

bool	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (true);
	return (false);
}

bool	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

int	ft_strlen(char *s)
{
	int	count;

	if (!s)
		return (0);
	count = 0;
	while (s[count])
		count++;
	return (count);
}
