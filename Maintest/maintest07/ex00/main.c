/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:08:50 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/17 08:55:08 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_strdup(argv[1]));
	return (0);
}
