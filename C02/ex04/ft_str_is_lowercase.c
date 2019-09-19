/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 08:58:15 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 18:21:58 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_lowercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}
