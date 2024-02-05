/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:39:52 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/05 06:31:20 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_print(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

char	*ft_putnbr_to_string(int nb)
{
	char *str;
    int temp = nb;
    int size = 0;

    while (temp > 0)
    {
        temp /= 10;
        size++;
    }

	str = (char *)malloc((size + 1) * sizeof(char));
    temp = nb;
    int i = size - 1;
    while (temp > 0)
    {
        str[i] = (temp % 10) + '0';
        temp /= 10;
        i--;
    }
    str[size] = '\0';
    return str;
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648",12);
	else if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
    {
        write(1, "-", 1);
        nb *= (-1);
    }
    char *str = ft_putnbr_to_string(nb);
    ft_print(str);    
}

int main(void)
{
    ft_putnbr(0000000);
    return 0;
}
