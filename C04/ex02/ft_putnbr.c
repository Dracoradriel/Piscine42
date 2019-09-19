/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:38:48 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/05 18:40:33 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	algo_recurs(int nb)
{
	if (nb)
	{
		algo_recurs(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb = 147483648;
		ft_putchar('-');
		ft_putchar('2');
	}
	if (nb)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		algo_recurs(nb);
	}
	else
		ft_putchar('0');
}
