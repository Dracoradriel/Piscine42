/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 20:38:33 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/02 16:07:59 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int i;

	i = 0;
	ft_rev_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	return(0);
}
