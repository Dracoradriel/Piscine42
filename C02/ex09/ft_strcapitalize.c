/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 08:58:15 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 18:43:58 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	alpha(char c);
char	low(char c);
char	upper(char c);

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && alpha(str[i]) && low(str[i]))
			str[i] = str[i] - 32;
		else if (i > 0 && alpha(str[i])
				&& upper(str[i]) && alpha(str[i - 1]))
			str[i] = str[i] + 32;
		else if (i > 0 && alpha(str[i])
				&& low(str[i]) && (!(alpha(str[i - 1]))))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

char	alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

char	low(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

char	upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}
