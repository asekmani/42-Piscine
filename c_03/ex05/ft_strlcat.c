/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:02:01 by asekmani          #+#    #+#             */
/*   Updated: 2022/07/23 13:37:59 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	j = ft_strlen(dest);
	k = ft_strlen(src);
	if (size == 0)
		return (k);
	if (size < j)
		return (size + k);
	j = 0;
	while (dest[j] != '\0')
		j++;
	i = 0;
	while ((src[i] != '\0') && (size - 1 > j + i))
	{
		dest[j + i] = src[i];
		i++;
	}
	if (size > i)
		dest[j + i] = '\0';
	return (j + k);
}
