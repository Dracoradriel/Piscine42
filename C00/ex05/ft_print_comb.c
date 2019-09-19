/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 21:10:19 by qandrean          #+#    #+#             */
/*   Updated: 2019/08/29 14:24:41 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = '0' - 1;
	while (x++ < '7')
	{
		y = x;
		while (y++ < '8')
		{
			z = y;
			while (z++ < '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if ((x != '7') || (y != '8') || (z != '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
