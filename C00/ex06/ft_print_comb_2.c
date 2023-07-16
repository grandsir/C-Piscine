/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:11:39 by databey           #+#    #+#             */
/*   Updated: 2023/07/15 13:06:31 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		ft_putint(num / 10);
		num %= 10;
	}
	ft_putchar(num + '0');
}

void	ft_put_comb(int f, int s)
{
	if (f < 10)
		ft_putchar('0');
	ft_putint(f);
	ft_putchar(' ');
	if (s < 10)
		ft_putchar('0');
	ft_putint(s);
	if (f != 98 || s != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb_2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f < 99)
	{
		s = f + 1;
		while (s <= 99)
			ft_put_comb(f, s++);
		f++;
	}
}
