/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:17:52 by asekmani          #+#    #+#             */
/*   Updated: 2022/07/24 15:21:02 by asekmani         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	i;

	i = (argc - 1);
	while (i > 0)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
