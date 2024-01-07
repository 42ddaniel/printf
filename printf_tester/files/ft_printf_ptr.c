/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:06:08 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/11/10 20:37:21 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	count_hex(unsigned long n)
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

static char	*ft_hex_str(unsigned long n, char *base)
{
	int		size;
	char	*hex;

	size = count_hex(n);
	hex = (char *)malloc(sizeof (char) * (size + 1));
	if (!hex)
		return (NULL);
	hex[size] = '\0';
	size--;
	while (size >= 0)
	{
		hex[size] = base[n % 16];
		n = n / 16;
		size--;
	}
	return (hex);
}

int	put_ptr(void *nbr, char *base)
{
	unsigned long	n;
	char			*str;
	int				len;

	len = 0;
	if (nbr == 0)
	{
		len += write(1, "(nil)", 5);
		return (len);
	}
	n = (unsigned long)nbr;
	str = ft_hex_str(n, base);
	len = write(1, "0x", 2);
	len += ft_putstr(str);
	free(str);
	return (len);
}
