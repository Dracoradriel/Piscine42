/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:52:36 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/18 10:56:06 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	a = 0;
	b = 0;
	c = 0;
	while (dest[a])
		a++;
	while (src[b])
		b++;
	if (size <= a)
		b += size;
	else
		b += a;
	while ((src[c] != 0) && (a + 1 < size))
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	dest[a] = 0;
	return (b);
}
