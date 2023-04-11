/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:27:08 by skhaliff          #+#    #+#             */
/*   Updated: 2023/04/11 13:27:52 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	new_line_map(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	if (str[i] == '1' || str[i] == '0')
	{
		return (1);
	}
	return (0);
}

void	check_line(char *h)
{
	if (h[0] == '\n' || (ft_strlen(h) == 2 && h[1] == '\n'))
		error("Error\n");
}