/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:02:11 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/21 15:04:58 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (!src && !dest)
		return (0);
	if (d > s)
		while (n--)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main()
{
	char s[] = "hello world";
	char d[] = "";
	char s1[] = "hello world";
	char d1[] = "";
	ft_memmove(d, s, 2);
	printf("%s\n", d);
	memmove(d1, s1, 2);
	printf("%s", d1);
}
*/
