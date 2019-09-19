/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 17:29:02 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 18:05:31 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_strncpy(char  *dest, char *src, unsigned int n);

int main () 
{
	char src[40];
	char dest[12];
		    
	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is tutorialspoint.com");
	ft_strncpy(dest, src, 10);

	printf("Final copied string : %s\n", dest);
					     
	return(0);
}
