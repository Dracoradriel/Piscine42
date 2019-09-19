/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 08:37:13 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/17 08:55:05 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *result;

	if (!(result = (char*)malloc(sizeof(src))))
		return (NULL);
	if (result == (char*)0)
		return (char*)0;
	ft_strcpy(result, src);
	return (result);
}
