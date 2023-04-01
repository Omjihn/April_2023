/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blackjack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:36:46 by gbricot           #+#    #+#             */
/*   Updated: 2023/04/01 18:43:23 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	if (argc == 1)
		return (printf("Error\n"));
	while (argv[1][i])
	{
		if (argv[1][i] > '0' && argv[1][i] <= '9')
			total += argv[1][i] - '0';
		else if (argv[1][i] == 'J' || argv[1][i] == 'D' ||
				argv[1][i] == 'K' || argv[1][i] == 'T')
		{
			total += 10;
		}
		else if (argv[1][i] == 'A')
		{
			if (total + 11 > 21)
				total += 1;
			else
				total += 11;
		}
		else
			return (printf("Error\n"));
		i++;
	}
	if (total == 21)
		return (printf("Blackjack!\n"));
	return (printf("%d\n", total));
}
