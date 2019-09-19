/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qandrean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:46:37 by qandrean          #+#    #+#             */
/*   Updated: 2019/09/04 17:48:35 by qandrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	//	if (argc == 2)
	//		ft_putstr_non_printable(argv[1]);
	//	else
	//		return (0);

	char chaine[] = "Coucou\ntu vas bien ?";
	printf("%s\n", ft_putstr_non_printable(chaine));
}
