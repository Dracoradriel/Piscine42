/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:18:05 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 18:40:38 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
   	char chaine[] = "UnJourJeSeraisLePlusGrandDeToutLesHokage";
	printf("%s\n", chaine);
	printf("%s\n", ft_strupcase(chaine));
}
