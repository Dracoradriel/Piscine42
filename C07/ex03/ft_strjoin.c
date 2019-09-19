/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:12:40 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/17 09:31:43 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int i_src;

	i = 0;
	while (dest[i] != '\0')
		i++;
	i_src = 0;
	while (src[i_src] != '\0')
	{
		dest[i + i_src] = src[i_src];
		i_src++;
	}
	dest[i + i_src] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*tab;

	tab = NULL;
	len = 0;
	i = 0;
	if (size == 0)
		return ((char*)malloc(0));
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (ft_strlen(sep) * (size - 1)) + 1;
	tab = (char*)malloc(sizeof(char) * (len));
	i = -1;
	tab[0] = '\0';
	while (++i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i != (size - 1))
			ft_strcat(tab, sep);
	}
	return (tab);
}
