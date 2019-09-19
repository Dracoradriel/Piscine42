/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 20:01:54 by qandrean          #+#    #+#             */
/*   Updated: 2019/08/29 13:50:25 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char numbers)
{
	write(1, &numbers, 1);
}

void	ft_print_numbers(void)
{
	char numbers;

	numbers = '0';
	while (numbers <= '9')
	{
		ft_putchar(numbers);
		numbers++;
	}
}
