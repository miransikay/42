/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esankaya <esankaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:27:55 by esankaya          #+#    #+#             */
/*   Updated: 2024/07/13 18:27:57 by esankaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	a;

	a = 0;
	while (a < size - 1)
	{
		temp = tab[a];
		tab[a] = tab[size - 1];
		tab[size -1] = temp;
		size--;
		a++;
	}
}

int	main(void)
{
	int	len;
	int	arr[6] = {1, 2, 3, 4, 5, 6};
	int	i;

	len = 6;
	i = 0;
	ft_rev_int_tab(arr, len);
	while (i < len)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}
