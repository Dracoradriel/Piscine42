/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 22:30:20 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 09:39:16 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main () 
{
	char str1[15];
	char str2[15];
	int ret;


	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret = ft_strcmp(str1, str2);

	if(ret < 0)
	{
		printf("str1 is less than str2");
	} else if(ret > 0) {
		printf("str2 is less than str1");
	} else {
		printf("str1 is equal to str2");
	}

	return(0);
}
