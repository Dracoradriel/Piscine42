/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:59:33 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 19:12:18 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);
int main(void)
{
	char chaine1[] = "dest";
	char chaine2[] = "source";
	printf("%s\n",chaine1);
	printf("%lu\n",strlcpy(chaine1, chaine2, 2));
	printf("%s\n",chaine1);

	char chaine1b[] = "dest";
	char chaine2b[] = "source";
	printf("%s\n",chaine1b);
	printf("%d\n",ft_strlcpy(chaine1b,chaine2b, 2));
	printf("%s\n",chaine1b);
}
