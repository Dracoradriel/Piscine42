/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 14:59:10 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/02 15:28:25 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int a;

	i = 0;
	while (i < size - 1)
	{
		while (tab[i] > tab[i + 1])
		{
			a = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = a;
			i = 0;
		}
		i++;
	}
}
