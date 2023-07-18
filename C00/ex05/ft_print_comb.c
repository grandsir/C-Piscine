/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:11:20 by databey           #+#    #+#             */
/*   Updated: 2023/07/16 09:49:22 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int c)
{
	ft_putchar(c + '0');
}

void	ft_put_comb(int k, int l, int m)
{
	ft_putint(k);
	ft_putint(l);
	ft_putint(m);
	if (k != 7 || l != 8 || m != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	k;
	int	l;
	int	m;

	k = 0;
	l = 1;
	m = 2;
	while (k <= 7)
	{
		while (l <= 8)
		{
			while (m <= 9)
			{
				ft_put_comb(k, l, m);
				m++;
			}
			m = ++l + 1;
		}
		l = ++k;
	}
}
