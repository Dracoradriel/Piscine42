/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 11:19:29 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/05 19:15:22 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	char			*begin;
	char			*comp;

	i = 0;
	while (str != '\0')
	{
		begin = str;
		comp = to_find;
		while (*str && *comp && *str == *comp)
		{
			str++;
			comp++;
		}
		if (*comp == '\0')
			return (begin);
		if (comp != 0 && *str == '\0')
		{
			return (0);
		}
		str = begin + 1;
	}
	return (str);
}
