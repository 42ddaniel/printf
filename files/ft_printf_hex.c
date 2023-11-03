/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:48:28 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/11/03 19:10:50 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	count_hex(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static char	*hex_str(unsigned int n, char *base)
{
	int		size;
	char	*hex;

	size = count_hex(n);
	hex = (char *)malloc(sizeof (char) * (size + 1));
	if (!hex)
		return (NULL);
	hex[size] = '\0';
	size--;
	while (size > 0)
	{
		hex[size] = base[n % 16];
		n = n / 16;
		size--;
	}
	return (hex);
}

int	print_hex(unsigned int n, char *base)
{
	char	*str;
	int		len;

	str = hex_str(n, base);
	len = count_hex(str);
	free(str);
	return (len);
}
