/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:36:07 by asekmani          #+#    #+#             */
/*   Updated: 2022/07/19 18:38:01 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	boucle_01(char a, char b, char c, char d)
{
	d = '1';
	while (d <= '9')
	{
		if ((a + b) < (c + d))
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			if (a != '9' || b != '8' || c != '9' || d != '9')
			{
				write(1, ", ", 2);
			}
		}
	d++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '8')
		{
			c = '0';
			d = '1';
			while (c <= '9')
			{
				boucle_01(a, b, c, d);
			c++;
			}
		b++;
		}
	a++;
	}
}
