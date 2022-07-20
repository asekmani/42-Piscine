/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeniau <edeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:07:51 by edeniau           #+#    #+#             */
/*   Updated: 2022/07/10 16:30:11 by edeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne_externe03(int colonne, int x)
{
	while (colonne <= x)
	{
		if (colonne == 1)
			ft_putchar('A');
		else if (colonne == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		colonne++;
	}
}

void	ligne_interne03(int colonne, int x)
{
	while (colonne <= x)
	{
		if (colonne == 1 || colonne == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		colonne++;
	}
}

void	rush03(int x, int y)
{
	int	ligne;
	int	colonne;

	ligne = 1;
	while (ligne <= y)
	{
		colonne = 1;
		if (ligne == 1 || ligne == y)
			ligne_externe03(colonne, x);
		else
			ligne_interne03(colonne, x);
		ligne++;
		ft_putchar('\n');
	}
}
