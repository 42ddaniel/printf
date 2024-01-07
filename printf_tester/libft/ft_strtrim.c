/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:50:30 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/18 16:18:22 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	start;
	size_t	end;

	end = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_cset(s1[start], set))
		start++;
	while (end > start && ft_cset(s1[end - 1], set))
		end--;
	trim = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
		trim[i++] = s1[start++];
	trim[i] = 0;
	return (trim);
}
/*
int	main()
{
	char	s1[] = "to be or not to be";
	char	s2[] = "to";
	printf("%s", ft_strtrim(s1, s2));
}*/
