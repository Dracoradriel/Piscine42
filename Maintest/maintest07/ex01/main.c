/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:29:53 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/17 09:13:26 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int moin, int max);

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int *tab;
		int nb1;
		int nb2;
		int i;

		i = 0;
		nb1 = (atoi(argv[1]));
		nb2 = (atoi(argv[2]));
		tab = ft_range(nb1, nb2);
		while (i < nb2 - nb1)
		{
			printf("[%d]", tab[i]);
			i++;
		}
	}
	return (0);
}
