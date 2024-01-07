/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:50:28 by ddaniel-          #+#    #+#             */
/*   Updated: 2024/01/07 11:49:02 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("Teste de char: %c\n", 'A');
	ft_printf("Teste de string: %s\n", "Hello, World!");
	ft_printf("Teste de ponteiro: %p\n", (void *)12345);
	ft_printf("Teste de inteiro: %d\n", 42);
	ft_printf("Teste de inteiro sem sinal: %u\n", 255);
	ft_printf("Teste de hexadecimal: %x\n", 255);
	ft_printf("Teste de percentagem: %%\n");
	return (0);
}
