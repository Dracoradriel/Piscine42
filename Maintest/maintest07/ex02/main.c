/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:48:00 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/17 09:23:36 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int *res = NULL;
	int i;
	int size;

	size = ft_ultimate_range(&res, 5, 10);
	printf("is_null ? %d\n", res == NULL);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = NULL;
	size = ft_ultimate_range(&res, -20, -17);
	printf("is_null ? %d\n", res == NULL);
	for (i = 0; i < 3; i++)
		printf("%d,", res[i]);
	printf("\n");

	res =(int*)1;
	size = ft_ultimate_range(&res, 10, 5);
	printf("is_null ? %d\n", res == NULL);

	return (0);
}
