/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meichan <meichan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:01:43 by meichan           #+#    #+#             */
/*   Updated: 2026/07/25 23:02:42 by meichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	parse_input(char *str, t_game *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 15 && j <= 31)
	{
		clues[i] = str[j];
		i++;
		j += 2;
	}
	return (0);
}

void	print_grid(t_game *game)
{
	grid[][];
}

void	print_error(void)
{
	write (1, "Error\n", 6);
}
