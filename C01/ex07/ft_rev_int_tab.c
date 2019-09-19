/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 20:33:05 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/01 21:54:54 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;
	int indicemax;

	i = 0;
	indicemax = size - 1;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[indicemax - i];
		tab[indicemax - i] = tmp;
		i++;
	}
}
