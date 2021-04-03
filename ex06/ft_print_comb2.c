/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 22:39:51 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/03 02:02:29 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char numbers[5];
	char fourth_number_start;

	numbers[2] = ' ';
	numbers[0] = '0' - 1;
	while (numbers[0]++ < '9')
	{
		numbers[1] = '0' - 1;
		while (numbers[1]++ < '9')
		{
			numbers[3] = numbers[0] - 1;
			fourth_number_start = numbers[1];
			while (numbers[3]++ < '9')
			{
				numbers[4] = fourth_number_start;
				fourth_number_start = '0' - 1;
				while (numbers[4]++ < '9')
				{
					write(1, numbers, 5);
					if (numbers[0] != '9' || numbers[1] != '8')
						write(1, ", ", 3);
				}
			}
		}
	}
}
