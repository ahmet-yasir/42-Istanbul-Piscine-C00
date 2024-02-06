/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:39:52 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/06 15:09:08 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_print(int *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	*ft_putnbr_to_string(int nb)
{
	int	*result_str;
	int	i;
	int	temp;
	int	size;

	temp = nb;
	size = 0;
	while (temp > 0)
	{
		temp /= 10;
		size++;
	}
	result_str = (int *)malloc((size + 1) * sizeof(int));
	temp = nb;
	i = size - 1;
	while (temp > 0)
	{
		result_str[i] = (temp % 10) + '0';
		temp /= 10;
		i--;
	}
	result_str[size] = '\0';
	return (result_str);
}

void	ft_putnbr(int nb)
{
	int	*str;

	if (nb == -2147483648)
		write(1, "-2147483648", 12);
	else if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= (-1);
	}
	str = ft_putnbr_to_string(nb);
	ft_print(str);
}
