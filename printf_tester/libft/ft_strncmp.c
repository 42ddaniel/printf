/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:45:52 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/18 16:16:01 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (str2[i] && str1[i] == str2[i] && str1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
int	main()
{
	char	s1[] = "abcdefghij";
	char	s2[] = "abcdefgxyz";

	printf("%d", ft_strncmp(s1, s2, 3));
	printf("%d", ft_strncmp(s1, s2, 4));
}*/
