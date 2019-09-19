/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 22:54:28 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/02 15:31:58 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int change_div;
	int change_rest;

	change_div = *a / *b;
	change_rest = *a % *b;
	*a = change_div;
	*b = change_rest;
}
