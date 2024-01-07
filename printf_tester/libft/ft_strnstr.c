/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:16:10 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/08 19:10:57 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bstr, const char *lstr, size_t n)
{
	size_t	i;

	if (*lstr == 0)
		return ((char *)bstr);
	i = ft_strlen(lstr);
	if (n == 0)
		return (0);
	while (*bstr && i <= n)
	{
		if (*bstr == *lstr && ft_strncmp(bstr, lstr, i) == 0)
			return ((char *)bstr);
		++bstr;
		--n;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "Once uppon a time";
	char	to_find[] = " ";
	char	strtst[] = "Once uppon a time";
	char	findtst[] = " ";

	printf("Func strstr:\n %s\n", strnstr(strtst, findtst, 4));
	ft_strstr(str, to_find);
	printf("Func ft_strstr:\n %s", ft_strnstr(str, to_find, 4));
}*/
