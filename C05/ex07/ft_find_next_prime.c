/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:17:40 by databey           #+#    #+#             */
/*   Updated: 2023/07/29 21:17:41 by databey          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprime(int nb)
{
	unsigned int	i;
    unsigned int    n;

	if (nb < 2)
		return (0);
	i = 2;
    n = (unsigned int) nb;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb <= 2)
        return (2);
    while(1)
    {
        if (ft_isprime(nb))
            return (nb);
        nb++;
    }
}