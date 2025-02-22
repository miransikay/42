/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esankaya <esankaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:27:47 by esankaya          #+#    #+#             */
/*   Updated: 2024/07/13 18:27:49 by esankaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

int	main(void)
{
	int	j;
	int	tab[6] = {7, 5, 4, 3, 6, 2};
	int	s;

	s = 6;
	ft_sort_int_tab(tab, s);
	j = 0;
	while (j < s)
	{
		printf("%d, ", tab[j]);
		j++;
	}
	return (0);
}
