/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:22:23 by asekmani          #+#    #+#             */
/*   Updated: 2022/07/20 19:14:25 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	resultat;

	i = 0;
	j = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			j = j * (-1);
		}
		i++;
	}
	resultat = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = (str[i] - '0') + (resultat * 10);
		i++;
	}
	return (resultat * j);
}
