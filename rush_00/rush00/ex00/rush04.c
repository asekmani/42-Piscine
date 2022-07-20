/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeniau <edeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:07:51 by edeniau           #+#    #+#             */
/*   Updated: 2022/07/10 16:30:38 by edeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne_haut04(int colonne, int x)
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

void	ligne_bas04(int colonne, int x)
{
	while (colonne <= x)
	{
		if (colonne == 1)
			ft_putchar('C');
		else if (colonne == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		colonne++;
	}
}

void	ligne_interne04(int colonne, int x)
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

void	rush04(int x, int y)
{
	int	ligne;
	int	colonne;

	ligne = 1;
	while (ligne <= y)
	{
		colonne = 1;
		if (ligne == 1)
			ligne_haut04(colonne, x);
		else if (ligne == y)
			ligne_bas04(colonne, x);
		else
			ligne_interne04(colonne, x);
		ligne++;
		ft_putchar('\n');
	}
}
