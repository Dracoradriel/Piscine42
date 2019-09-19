/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 09:58:32 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 11:08:31 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
