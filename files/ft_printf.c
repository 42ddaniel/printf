/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:19:05 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/11/10 20:37:59 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	printf_arg(const char *form, int i, va_list arg)
{
	if (form[i + 1] == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (form[i + 1] == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (form[i + 1] == 'p')
		return (put_ptr(va_arg(arg, void *),
				"0123456789abcdef"));
	else if (form[i + 1] == 'd' || form[i + 1] == 'i')
		return (ft_putnb(va_arg(arg, int)));
	else if (form[i + 1] == 'u')
		return (ft_putnb_u(va_arg(arg, unsigned int)));
	else if (form[i + 1] == 'x' || form[i + 1] == 'X')
	{
		if (form[i + 1] == 'x')
			return (print_hex(va_arg(arg, unsigned int), "0123456789abcdef"));
		else
			return (print_hex(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	}
	else if (form[i + 1] == '%')
		return (ft_putchar(form[i]));
	else
		return (0);
}

int	ft_printf(const char *form, ...)
{
	va_list	arg;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(arg, form);
	if (!form)
		return (-1);
	while (form[i])
	{
		if (form[i] == '%' && ft_strchr("cspdiuxX%", form[i + 1]))
		{
			ret += printf_arg(form, i, arg);
			i++;
		}
		else
			ret += ft_putchar(form[i]);
		i++;
	}
	va_end(arg);
	return (ret);
}
