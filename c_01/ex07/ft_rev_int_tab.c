/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:45:57 by asekmani          #+#    #+#             */
/*   Updated: 2022/07/14 14:31:05 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swip(int *a, int *b)
{
	int	aa;

	aa = *a;
	*a = *b;
	*b = aa;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;

	if (size > 1)
	{
		n = 0;
		while ((size - 1) - n > 0)
		{
			ft_swip(&tab[n], &tab[size - 1]);
			size--;
			n++;
		}
	}
}
