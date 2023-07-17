/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:32:44 by databey           #+#    #+#             */
/*   Updated: 2023/07/17 10:20:02 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	c;

	c = 0;
	while ((src[c] != '\0') && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
