/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:27:46 by asekmani          #+#    #+#             */
/*   Updated: 2022/07/09 15:50:17 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(char x, char y)
{
	l = 0;
	c = 0;

	while (l < y )
		
		if(l= 0 || l= y-1)

			while (c < x)

				if(c= 0 || c= x-1)
				
					write(1, 'o', 1);
					
					else
						write(1, '-', 1);

		write(1, '|'. 1);
		else
			write(1, ' ', 1);





	void	Str_1(int i)

	{
		if( i= 0 || i+1 = x)
			
			write(1, 'o', 1);
		
		if( i> 0 && i< x-1)

			write(1, '-', 1);
	}

	void	str_2(int j)
	{
		if ( j= 0 || j+1 = x)
			
			write(1, '|', 1);
		
		if ( j> 0 && j< x-1)
			
			write(1, ' ', 1);
	}
	
	void	Str(int k)
	
	{
		if ( k= 0 || k= y)
			
			Str_1(int i);
		else 
			
			str_2(int j);
	}




}
