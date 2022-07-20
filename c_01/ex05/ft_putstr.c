/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:10:17 by asekmani          #+#    #+#             */
/*   Updated: 2022/07/16 14:14:41 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_long(char *str)
{
	int	ln;

	ln = 0;
	while (str[ln])
	{
		ln++;
	}
	return (ln);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_long(str));
}
