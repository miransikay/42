/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esankaya <esankaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:25:26 by esankaya          #+#    #+#             */
/*   Updated: 2024/07/13 18:25:30 by esankaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src)
{
	char	*ptr;

	*ptr = dest;
	while (*src != ('\0'))
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[50];

	ft_strcpy(dest, src);
	printf("Kaynak: %s\n", src);
	printf("Hedef: %s\n", dest);
	return (0);
}
