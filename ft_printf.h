/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:36:34 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/11/04 21:16:05 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int			ft_printf(const char *form, ...);
int			printf_arg(const char *form, va_list arg);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_putnb(int nbr);
int			ft_putnb_u(unsigned int nbr);
int			print_hex(unsigned int n, char *base);
int			count_hex(unsigned int n);
int			put_ptr(void *nbr, char base);
static char	*hex_str(unsigned int n, char *base);

#endif
