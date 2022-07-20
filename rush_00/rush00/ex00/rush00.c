/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeniau <edeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:07:51 by edeniau           #+#    #+#             */
/*   Updated: 2022/07/10 16:27:25 by edeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne_externe00(int colonne, int x)
{
	while (colonne <= x)
	{
		if (colonne == 1 || colonne == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		colonne++;
	}
}

void	ligne_interne00(int colonne, int x)
{
	while (colonne <= x)
	{
		if (colonne == 1 || colonne == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		colonne++;
	}
}

void	rush00(int x, int y)
{
	int	ligne;
	int	colonne;

	ligne = 1;
	while (ligne <= y)
	{
		colonne = 1;
		if (ligne == 1 || ligne == y)
			ligne_externe00(colonne, x);
		else
			ligne_interne00(colonne, x);
		ligne++;
		ft_putchar('\n');
	}
}
