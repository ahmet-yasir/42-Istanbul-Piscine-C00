/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:25:32 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/01 10:43:26 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i, int j, int k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i != 55 || j != 56 || k != 57)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	j = 48;
	k = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (i < j && j < k)
					print (i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
