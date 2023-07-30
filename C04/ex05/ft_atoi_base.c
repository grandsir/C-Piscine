/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:05:13 by databey           #+#    #+#             */
/*   Updated: 2023/07/26 12:17:05 by databey          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

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

int	search_index(char *str, char *base, int i)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (str[i] == base[j])
		{
			return (j);
		}
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	i;
	int	sign;
	int	num;

	if (!check_base(base))
		return (0);
	base_len = ft_strlen(base);
	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i])
	{
		if (search_index(str, base, i) == -1)
			break ;
		num = (num * base_len) + search_index(str, base, i++);
	}
	return (num * sign);
}
