/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:46:55 by databey           #+#    #+#             */
/*   Updated: 2023/07/21 11:39:58 by databey          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	num = 0;
	sign = 1;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
		i++;
	while(str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while(str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num * sign);
}
