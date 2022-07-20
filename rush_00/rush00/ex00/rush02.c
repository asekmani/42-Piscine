/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeniau <edeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:33:15 by edeniau           #+#    #+#             */
/*   Updated: 2022/07/10 16:29:23 by edeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne_haut02(int colonne, int x)
{
	while (colonne <= x)
	{
		if (colonne == 1 || colonne == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		colonne++;
	}
}

void	ligne_bas02(int colonne, int x)
{
	while (colonne <= x)
	{
		if (colonne == 1 || colonne == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		colonne++;
	}
}

void	ligne_interne02(int colonne, int x)
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

void	rush02(int x, int y)
{
	int	ligne;
	int	colonne;

	ligne = 1;
	while (ligne <= y)
	{
		colonne = 1;
		if (ligne == 1)
			ligne_haut02(colonne, x);
		else if (ligne == y)
			ligne_bas02(colonne, x);
		else
			ligne_interne02(colonne, x);
		ligne++;
		ft_putchar('\n');
	}
}
