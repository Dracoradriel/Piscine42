/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:18:05 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 19:54:17 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
   	char chaine[] = "\tS\tALUT, COMMENT TU VAS ? 42mots quarante-deux;\ncinquante+et+un";
	printf("%s\n", chaine);
	printf("%s\n", ft_strcapitalize(chaine));
}
