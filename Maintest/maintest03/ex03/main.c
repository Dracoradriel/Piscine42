/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:42:52 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 11:13:23 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main () {
	char src[50], dest[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	ft_strncat(dest, src, 15);

	printf("Final destination string : |%s|", dest);

	return(0);
}
