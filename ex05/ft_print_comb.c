/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:04:03 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/01 21:46:43 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;
	char	number[3];

	i = -1;
	while (i++ < 9)
	{
		j = i;
		while (j++ < 9)
		{
			k = j;
			while (k++ < 9)
			{
				number[0] = i + '0';
				number[1] = j + '0';
				number[2] = k + '0';
				write(1, number, 3);
				if (i < 7)
					write(1, ", ", 2);
			}
		}
	}
}
