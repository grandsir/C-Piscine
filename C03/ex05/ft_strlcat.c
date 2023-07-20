/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:18:32 by databey           #+#    #+#             */
/*   Updated: 2023/07/20 15:12:32 by databey          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;

	if (size == 0)
	{
		return (dest);
	}
	i = 0;
	while (src[i] && i < size)
	{
		dest[i + size] = src[i];
		i++;
	}
	dest[i + size] = '\0'
		return (i);
}
