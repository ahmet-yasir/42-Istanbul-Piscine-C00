/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:35:38 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/01 11:01:32 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int k, int l, int i)
{
	int	j;

	j = 48;
	while (j < 58)
	{
		if (((k * 10) + l) < ((i * 10) + j))
		{
			write(1, &k, 1);
			write(1, &l, 1);
			write(1, " ", 2);
			write(1, &i, 1);
			write(1, &j, 1);
			if (!(k == 57 && l == 57 && i == 57 && j == 57))
				write(1, ", ", 2);
		}
		j++;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	k;
	int	l;

	k = 48;
	while (k < 58)
	{
		l = 48;
		while (l < 58)
		{
			i = 48;
			while (i < 58)
			{
				print(k, l, i);
				i++;
			}
			l++;
		}
		k++;
	}
}
