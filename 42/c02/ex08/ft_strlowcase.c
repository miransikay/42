/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esankaya <esankaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:27:15 by esankaya          #+#    #+#             */
/*   Updated: 2024/07/13 20:06:36 by esankaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	*ptr = str;
	while (*ptr != '\0')
	{
		if ('A' <= *ptr && *ptr <= 'Z')
		{
			*ptr += 32;
		}
		ptr++;
	}
	return (str);
}

int	main(void)
{
    char	s[] = "MERHABA 42";
	printf("%s", ft_strlowcase(s));
	return (0);
}
