/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:46:37 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/05 10:08:54 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(int argc, char **argv)
{
	printf("%d\n", ft_strlcat(argv[1], argv[2], 5));
	printf("%lu\n", strlcat(argv1], argv[2], 5));
	return (0);
}
