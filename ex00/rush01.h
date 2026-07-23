/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 09:03:08 by melwong           #+#    #+#             */
/*   Updated: 2026/07/23 09:05:22 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

bool	ft_isspace(char c);
bool	ft_isdigit(char c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char s, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_strlen(char *str);

#endif
