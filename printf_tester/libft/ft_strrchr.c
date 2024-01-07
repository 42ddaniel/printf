/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:43:42 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/08 17:02:00 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == ((char)c))
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (0);
}
/*
int	main()
{
	const char	str[] = "Hello World";
	int	c = 'o';
	char	*ptr = ft_strrchr(str, c);
	printf("%s", ptr);
}*/
