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
	unsigned int	i;
	unsigned int	j;
	unsigned int	z;

	i = 0;
	j = 0;
	z = 0;
	while (dest[i] != '\0')
		i++;
	while (src[z] != '\0')
		z++;
	if (size <= i)
		z += size;
	else
		z += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (z);
}
