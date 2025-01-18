/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:06:30 by ddaniel-          #+#    #+#             */
/*   Updated: 2024/01/20 13:25:04 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_lenght_num(unsigned int n)
{
	int	len;

	len = 0;
	while (n != '\0')
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_lenght_num(n);
	num = (char *)malloc((len + 1) * sizeof(char *));
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}
