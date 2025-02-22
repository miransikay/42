/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esankaya <esankaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:27:07 by esankaya          #+#    #+#             */
/*   Updated: 2024/07/13 20:03:40 by esankaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	*ptr = str;
	while (*ptr != '\0')
	{
		if ('a' <= *ptr && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}
	return (str);
}

int	main(void)
{
	char	s[] = "merhaba 42";

	printf("%s", ft_strupcase(s));
	return (0);
}
