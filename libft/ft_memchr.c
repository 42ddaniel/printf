/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:06:50 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/07 19:56:25 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ustr;
	size_t			i;

	i = 0;
	ustr = (unsigned char *)str;
	while (i < n)
	{
		if (ustr[i] == (unsigned char)c)
			return (&ustr[i]);
		i++;
	}
	return (0);
}
/*
int main () 
{
   const char str[] = "Hello..World";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, 6);

   printf("%s\n", ret);

   return(0);
}*/
