/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decoloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 17:18:28 by decoloma          #+#    #+#             */
/*   Updated: 2019/09/01 17:20:42 by decoloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int width, int height);
void	ft_putchar(char c);

int		main(void)
{
	rush(5, 5);
	rush('A', 1);
	rush(6, 8);
	rush(10, 1);
	rush(1, 10);
	rush(0, 1);
	rush(1, 0);
	rush(-1, -1);
	rush(2, 2);
	rush(5, -5);
	return (0);
}
