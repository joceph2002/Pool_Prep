/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:18:00 by rgiraud           #+#    #+#             */
/*   Updated: 2023/08/01 20:18:04 by rgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_display(int a, int b)
{
	char	unit;
	char	unit01;
	char	dig;
	char	dig01;

	dig = a / 10 + '0';
	unit = a % 10 + '0';
	dig01 = b / 10 + '0';
	unit01 = b % 10 + '0';
	ft_putchar(dig);
	ft_putchar(unit);
	ft_putchar(' ');
	ft_putchar(dig01);
	ft_putchar(unit01);
	if (a != 98)
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1 ;
		while (b <= 99)
		{
			ft_display(a, b);
			b++;
		}
		a++;
	}
}
