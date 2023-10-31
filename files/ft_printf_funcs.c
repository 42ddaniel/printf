/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_funcs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:10:26 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/31 16:57:39 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "../ft_printf.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_putstr(char *str)
{
    int len;

    if (!str)
    {
        write(1, "(null)", 6);
        return (6);
    }
    len = ft_strlen(str);
    write(1, str, len);
    return (len);
}

int ft_putnbr(int   nbr)
{
    char    *str;
    int len;

    str = ft_itoa(nbr);
    len = ft_putstr(str);
    free(str);
    return(len);
}

int ft_putnbr_u(unsigned int    nbr)
{
    char    *str;
    int len;

    str = ft_itoa(nbr);
    len = ft_putstr(str);
    free(str);
    return (len);
}