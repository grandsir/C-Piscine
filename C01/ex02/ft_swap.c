/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:42:27 by databey           #+#    #+#             */
/*   Updated: 2023/07/15 17:51:24 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main() {
	int a = 45;
	int b = 50;

	printf("A: %d\n", a);
	printf("B: %d\n", b);
	ft_swap(&a, &b);
	printf("A: %d\n", a);
	printf("B: %d\n", b);

	return 0;
}
*/
