/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:57:39 by databey           #+#    #+#             */
/*   Updated: 2023/07/15 18:01:13 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int main()
{
	int a = 30;
	int b = 4;
	int div = 0;
	int mod = 0;
	printf("A: %d\n", a);
	printf("B: %d\n", b);
	
	ft_div_mod(a, b, &div, &mod)

	return 0;
}

