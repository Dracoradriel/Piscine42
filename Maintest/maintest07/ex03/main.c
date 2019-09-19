/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:46:55 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/17 09:30:44 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main()
{
	int n;
	char *param[] = {"Un", "Deux", "Trois"};
	char sym[] = "-----------";
	char *bonjour;

	n = 3;
	bonjour = ft_strjoin(n, param, sym);
	printf("%s", bonjour);

}
