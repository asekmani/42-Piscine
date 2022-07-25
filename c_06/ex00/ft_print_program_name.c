/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:41:09 by asekmani          #+#    #+#             */
/*   Updated: 2022/07/24 19:02:39 by asekmani         ###   ########.fr       */
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
	if (argc)
	{
		ft_putstr(argv[0]);
		write(1, "\n", 1);
	}
	return (0);
}
