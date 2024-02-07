/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:39:52 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/07 09:07:10 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_number(int nb)
{
    int temp;
    int digitCount;

	temp = nb;
	digitCount = 1;
    while (temp >= 10) {
        temp /= 10;
        digitCount *= 10;
    }
    while (digitCount > 0)
	{
        char digitChar = '0' + nb / digitCount;
        write(1, &digitChar, 1);
        nb %= digitCount;
        digitCount /= 10;
    }
}

void ft_putnbr(int nb)
{
    if (nb < 0)
	{
        write(1, "-", 1);
        if (nb == -2147483648) 
		{
            write(1, "2", 1);
            nb = 147483648;
        }
		else
            nb = -nb;
    }
    ft_print_number(nb);
}
