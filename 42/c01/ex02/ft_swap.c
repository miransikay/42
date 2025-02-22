/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esankaya <esankaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:28:29 by esankaya          #+#    #+#             */
/*   Updated: 2024/07/13 18:28:31 by esankaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 10;
	printf("before swap x=%d, y=%d\n", x, y);
	ft_swap(&x, &y);
	printf("after swap x=%d, y=%d\n", x, y);
	return (0);
}
