/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:17:22 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/14 16:08:15 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	all;
	char	*res;

	if (!s1 || !s2)
	{
		if (s1)
			return ((char *)ft_strdup(s1));
		else if (s2)
			return ((char *)ft_strdup(s2));
		else
			return ((char *)ft_strdup(""));
	}
	all = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc((all + 1) * (sizeof(char)));
	if (!res)
		return (res);
	i = 0;
	while (*s1)
		res[i++] = *s1++;
	while (*s2)
		res[i++] = *s2++;
	res[i] = '\0';
	return (res);
}
/*
int	main()
{
	char	*s1 = "123";
	char	*s2 = "456";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/
