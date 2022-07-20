/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeniau <edeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:07:51 by edeniau           #+#    #+#             */
/*   Updated: 2022/07/10 16:29:03 by edeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne_haut01(int colonne, int x)
{
	while (colonne <= x)
	{
		if (colonne == 1)
			ft_putchar('/');
		else if (colonne == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
		colonne++;
	}
}

void	ligne_bas01(int colonne, int x)
{
	while (colonne <= x)
	{
		if (colonne == 1)
			ft_putchar('\\');
		else if (colonne == x)
			ft_putchar('/');
		else
			ft_putchar('*');
		colonne++;
	}
}

void	ligne_interne01(int colonne, int x)
{
	while (colonne <= x)
	{
		if (colonne == 1 || colonne == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
		colonne++;
	}
}

void	rush01(int x, int y)
{
	int	ligne;
	int	colonne;

	ligne = 1;
	while (ligne <= y)
	{
		colonne = 1;
		if (ligne == 1)
			ligne_haut01(colonne, x);
		else if (ligne == y)
			ligne_bas01(colonne, x);
		else
			ligne_interne01(colonne, x);
		ligne++;
		ft_putchar('\n');
	}
}
