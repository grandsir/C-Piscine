/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:28:04 by databey           #+#    #+#             */
/*   Updated: 2023/07/24 10:28:09 by databey          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	if (!str[0] || !str[1])
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '-' || str[i] == '+')
			return (0);
		if (str[i] < 32 || str[i] == 127)
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	nb;

	if (!check_base(base))
		return ;
	base_len = ft_strlen(base);
	nb = nbr;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= base_len)
	{
		ft_putnbr_base(nb / base_len, base);
		nb %= base_len;
	}
	ft_putchar(base[nb]);
}
