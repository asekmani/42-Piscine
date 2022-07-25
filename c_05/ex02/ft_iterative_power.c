/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:14:26 by asekmani          #+#    #+#             */
/*   Updated: 2022/07/25 19:06:17 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 1;
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
