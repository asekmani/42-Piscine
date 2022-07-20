/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:10:44 by vegret            #+#    #+#             */
/*   Updated: 2022/07/17 15:11:07 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	result;

	result = 0;
	while (str[result] != '\0')
			result++;
	return (result);
}

int	is_valid_input(char *str)
{
	int	i;

	if (ft_strlen(str) == 31)
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (i % 2 == 0 && (str[i] < '1' || str[i] > '4'))
				return (0);
			if (i % 2 == 1 && str[i] != ' ')
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}

int	*split_and_convert(char *str)
{
	int	i;
	int	j;
	int	*result;

	i = 0;
	j = 0;
	result = (int *) malloc(sizeof(int) * 16);
	if (result == NULL)
		return (NULL);
	while (str[i] != '\0' && j != 16)
	{
		if (i % 2 == 0)
		{
			result[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (result);
}

void	print_grid(int **grid, int side_len)
{
	int		i;
	int		j;
	char	printed;

	i = 0;
	while (i < side_len)
	{
		j = 0;
		while (j < side_len)
		{
			printed = '0' + grid[i][j];
			write(1, &printed, 1);
			if (j != side_len - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
