/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:12:42 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 18:19:41 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str);

int		main(void)
{
	printf("%d\n", ft_str_is_numeric("Salut"));
	printf("%d\n", ft_str_is_numeric("42"));
	printf("%d\n", ft_str_is_numeric("Hello !"));
	printf("%d\n", ft_str_is_numeric("	OK"));
	printf("%d\n", ft_str_is_numeric("One4All"));
	printf("%d\n", ft_str_is_numeric("\0"));
	printf("%d\n", ft_str_is_numeric("unjourjeseraishokage"));
	printf("%d\n", ft_str_is_numeric("^%*()(%@#!><?*"));
}
