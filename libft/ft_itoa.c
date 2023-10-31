/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:49:34 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/21 15:01:39 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digitcount(long int i)
{
	int	count;

	count = 0;
	if (i <= 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	numb;
	int			count;
	char		*str;

	numb = n;
	count = ft_digitcount(numb);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (0);
	str[count--] = 0;
	if (numb == 0)
		str[0] = '0';
	if (numb < 0)
	{
		str[0] = '-';
		numb *= -1;
	}
	while (numb > 0)
	{
		str[count--] = numb % 10 + 48;
		numb /= 10;
	}
	return (str);
}
/*
int	main()
{
	int	i;
	char	*a;

	i = 0;
	a = ft_itoa(i);
	printf("%s", a);
}*/
