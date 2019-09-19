/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 11:18:52 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/02 15:28:07 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = {526, -42, 0, 1, 456435};
	int i;

	i = 0;
	ft_sort_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return(0);
}
