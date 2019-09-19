/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 11:19:05 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/05 15:36:51 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main() 
{
	char haystack[20] = "TutorialsPoint";
	char needle[10] = "Point";
	char *ret;

	ret = ft_strstr(haystack, needle);

	printf("The substring is: %s\n", ret);

	return(0);
}
