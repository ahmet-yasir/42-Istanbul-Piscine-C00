/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:35:38 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/07 08:55:21 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void) {
    int i = 0;
    while (i <= 98) {
        int j = i + 1;
        while (j <= 99) {
            ft_putchar((i / 10) + '0');
            ft_putchar((i % 10) + '0');
            ft_putchar(' ');
            ft_putchar((j / 10) + '0');
            ft_putchar((j % 10) + '0');

            if (i != 98 || j != 99) {
                ft_putchar(',');
                ft_putchar(' ');
            }

            j++;
        }
        i++;
    }
    ft_putchar('\n');
}
