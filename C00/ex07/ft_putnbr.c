/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:52:28 by qandrean          #+#    #+#             */
/*   Updated: 2019/08/29 18:20:38 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	algo_recurs(int x)
{
	if (x)
	{
		algo_recurs(x / 10);
		ft_putchar(x % 10 + 48);
	}
}

void	ft_putnbr(int x)
{
	if (x == -2147483648)
	{
		x = 147483648;
		ft_putchar('-');
		ft_putchar('2');
	}
	if (x)
	{
		if (x < 0)
		{
			ft_putchar('-');
			x *= -1;
		}
		algo_recurs(x);
	}
	else
		ft_putchar('0');
}
