/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:39:52 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/01 15:18:29 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_print(int nb)
{
	int	temp;
	int	value;

	temp = nb;
	while (temp > 0)
	{
		value = (temp % 10) + 48;
		write(1, &value, 1);
		temp /= 10;
	}
}

void	ft_putnbr_reverse(int nb)
{
	int	temp;
	int	place_value;
	int	new_num;

	temp = nb;
	place_value = 1;
	new_num = 0;
	while (temp > 0)
	{
		temp /= 10;
		place_value *= 10;
	}
	place_value /= 10;
	while (nb > 0)
	{
		new_num += place_value * (nb % 10);
		nb /= 10;
		place_value /= 10;
	}
	ft_putnbr_print(new_num);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= (-1);
	}
	else if (nb == 0)
		write(1, "0", 1);
	ft_putnbr_reverse(nb);
}
