/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:47:05 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/08 18:20:28 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	ii;
	unsigned int	i;

	i = 0;
	ii = 0;
	while (i < size && dest[i])
	{
		i++;
	}
	while ((i + ii + 1) < size && src[ii])
	{
		dest[ii + i] = src[ii];
		ii++;
	}
	if (i != size)
		dest[i + ii] = '\0';
	return (i + ft_strlen(src));
}
/*
int 	main(void)
{
	char	src[] = "world";
	char	dest[] = "Hello";

	ft_strlcat(dest, src, 4);
	printf("%s", dest);
}*/
