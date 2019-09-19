/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 09:41:30 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/05 19:05:33 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main () {
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "");
	strcpy(str2, "");

	ret = ft_strncmp(str1, str2, 0);

	if(ret < 0) {
		printf("str1 is less than str2");
	} else if(ret > 0) {
		printf("str2 is less than str1");
	} else {
		printf("str1 is equal to str2");
	}

	return(0);
}
