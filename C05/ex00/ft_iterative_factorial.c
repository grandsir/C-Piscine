/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:45:35 by databey           #+#    #+#             */
/*   Updated: 2023/07/29 20:55:43 by databey          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ret;

	i = 1;
	ret = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	while (i <= nb)
		ret *= i++;
	return (ret);
}