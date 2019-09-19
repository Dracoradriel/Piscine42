/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:18:05 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 18:36:55 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	printf("%d\n", ft_str_is_printable("Salut"));
	printf("%d\n", ft_str_is_printable("42"));
	printf("%d\n", ft_str_is_printable("Hello !"));
	printf("%d\n", ft_str_is_printable("	OK"));
	printf("%d\n", ft_str_is_printable("One4All"));
	printf("%d\n", ft_str_is_printable("\0"));
	printf("%d\n", ft_str_is_printable("unjourjeseraishokage"));
	printf("%d\n", ft_str_is_printable("^%*()(%@#!><?*"));
	printf("%d\n", ft_str_is_printable("BLESSSEEE"));
}
