/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:56:11 by databey           #+#    #+#             */
/*   Updated: 2023/07/29 21:23:58 by databey          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb == 1) || (nb == 0))
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}