/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:19:05 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/11/03 17:49:06 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	printf_arg(const char *form, va_list arg)
{
	if (form == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (form == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (form == 'p')
		return ();
	else if (form == 'd' || form == 'i')
		return (ft_putnb(va_arg(arg, int)));
	else if (form == 'u')
		return (ft_putnb_u(va_arg(arg, unsigned int)));
	else if (form == 'x' || form == 'X')
		return ();
	else if (form == '%')
		return (ft_putchar(form));
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
		if (form[i] == "%" && ft_strchr("cspdiuxX%", form[i + 1]))
		{
			ret += printf_arg(form[i + 1], arg);
			i++;
		}
		else
			ret += ft_putchar(form[i]);
		i++;
	}
	va_end(arg);
	return (ret);
}
