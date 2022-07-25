/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:21:01 by asekmani          #+#    #+#             */
/*   Updated: 2022/07/23 12:07:16 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	j = ft_strlen(dest);
	i = 0;
	while ((src[i] != '\0') && (nb > 0))
	{
		dest[j + i] = src[i];
		i++;
		nb--;
	}
	dest[j + i] = '\0';
	return (dest);
}
