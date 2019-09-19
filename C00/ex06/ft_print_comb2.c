/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:21:22 by qandrean          #+#    #+#             */
/*   Updated: 2019/08/29 11:43:53 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	on_display(int x)
{
	ft_putchar(x / 10 + 48);
	ft_putchar(x % 10 + 48);
}

void	ft_print_comb2(void)
{
	int duo1;
	int duo2;

	duo1 = 0 - 1;
	while (duo1++ < 98)
	{
		duo2 = duo1;
		while (duo2++ < 99)
		{
			on_display(duo1);
			ft_putchar(' ');
			on_display(duo2);
			if (duo1 != 98 || duo2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
