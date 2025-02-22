/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esankaya <esankaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:29:48 by esankaya          #+#    #+#             */
/*   Updated: 2024/07/13 18:29:50 by esankaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	x;

	x = 48;
	while (x <= 57 && write(1, &x, 1))
		x++;
}

int	main(void)
{
	ft_print_numbers();
}
