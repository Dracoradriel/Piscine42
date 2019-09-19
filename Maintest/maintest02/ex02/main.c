/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:07:10 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 18:12:15 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str);

int		main(void)
{
	printf("%d\n", ft_str_is_alpha("Salut"));
	printf("%d\n", ft_str_is_alpha("42"));
	printf("%d\n", ft_str_is_alpha("Hello !"));
	printf("%d\n", ft_str_is_alpha("	OK"));
	printf("%d\n", ft_str_is_alpha("One4All"));
	printf("%d\n", ft_str_is_alpha("\0"));
	printf("%d\n", ft_str_is_alpha("unjourjeseraishokage"));
	printf("%d\n", ft_str_is_alpha("^%*()(%@#!><?*"));
}
