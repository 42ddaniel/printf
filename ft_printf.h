/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:36:34 by ddaniel-          #+#    #+#             */
/*   Updated: 2024/01/20 12:48:58 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

int			ft_printf(const char *form, ...);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_putnb(int nbr);
int			ft_putnb_u(unsigned int nbr);
int			print_hex(unsigned int n, char *base);
int			put_ptr(void *nbr, char *base);
char		*ft_utoa(unsigned int n);

#endif
