/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:18:05 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 18:26:21 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	printf("%d\n", ft_str_is_uppercase("Salut"));
	printf("%d\n", ft_str_is_uppercase("42"));
	printf("%d\n", ft_str_is_uppercase("Hello !"));
	printf("%d\n", ft_str_is_uppercase("	OK"));
	printf("%d\n", ft_str_is_uppercase("One4All"));
	printf("%d\n", ft_str_is_uppercase("\0"));
	printf("%d\n", ft_str_is_uppercase("unjourjeseraishokage"));
	printf("%d\n", ft_str_is_uppercase("^%*()(%@#!><?*"));
	printf("%d\n", ft_str_is_uppercase("BLESSSEEE"));
}
