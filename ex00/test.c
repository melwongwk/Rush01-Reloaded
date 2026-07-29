/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meichan <meichan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 14:15:47 by meichan           #+#    #+#             */
/*   Updated: 2026/07/29 17:30:07 by meichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_error();
int	parse_input(char *str);
void	print_grid(int grid[4][4]);

int	main(int argc, char **argv)
{
	int	grid[4][4] = {{1, 2, 3, 4}, {2, 3, 4, 1}, {3, 4, 1, 2}, {4, 1, 2, 3}};

	if (argc != 2)
		print_error();
	else
		printf("Char clues: %s\n", argv[1]);
	parse_input(argv[1]);
	print_grid(grid);
	return (0);
}

int	parse_input(char *str)
{
	int	clues[16];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 15 && j <= 31)
	{
		clues[i] = str[j] - '0';
		printf("%d ", clues[i]);
		i++;
		j += 2;
	}
	return (0);
}

void	print_grid(int grid[][4])
{
	int	r;
	int	c;

	r = 0;
	c = 0;
	while (r <= 3)
	{
		while (c <= 3)
		{
			printf("%d ", grid[r][c]);
			c++;
		}
		printf("\n");
		c = 0;
		r++;
	}
}

void	print_error(void)
{
	write (1, "Error\n", 6);
}
