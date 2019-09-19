/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:18:05 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 18:22:14 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	printf("%d\n", ft_str_is_lowercase("Salut"));
	printf("%d\n", ft_str_is_lowercase("42"));
	printf("%d\n", ft_str_is_lowercase("Hello !"));
	printf("%d\n", ft_str_is_lowercase("	OK"));
	printf("%d\n", ft_str_is_lowercase("One4All"));
	printf("%d\n", ft_str_is_lowercase("\0"));
	printf("%d\n", ft_str_is_lowercase("unjourjeseraishokage"));
	printf("%d\n", ft_str_is_lowercase("^%*()(%@#!><?*"));
}
