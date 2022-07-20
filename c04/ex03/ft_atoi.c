/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:22:23 by asekmani          #+#    #+#             */
/*   Updated: 2022/07/20 17:45:12 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
			{
				str[i] = str[i] * (-1);
			}
			i++;
		}
		while (str[i] == '-')
		{
			j++;
			i++;
		}
		return (j);
	if (str[i] >= '0' && str[i] <= '9')
		if ( j % 2 == 0)
}
