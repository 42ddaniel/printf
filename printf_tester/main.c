/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:50:28 by ddaniel-          #+#    #+#             */
/*   Updated: 2024/01/07 14:00:07 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("Teste de char: %c\n", 'A');
	printf("Char: %c\n", 'A');
	ft_printf("Teste de string: %s\n", "Hello, World!");
	printf("String: %s\n", "Hello, World!");
	ft_printf("Teste de pointer: %p\n", (void *)12345);
	printf("Pointer: %p\n", (void *)12345);
	ft_printf("Teste de inteiro: %d\n", 42);
	printf("Int: %d\n", 42);
	ft_printf("Teste de inteiro base 10: %i\n", 010); 
	printf("Int base 10 (octal): %i\n", 010);
	ft_printf("Teste de inteiro sem sinal: %u\n", 255);
	printf("Teste int sem sinal: %u\n", 255);
	ft_printf("Teste de hex lowercase: %x\n", 255);
	printf("Teste hex low: %x\n", 255);
	ft_printf("Teste de hex uppercase: %X\n", 255);
	printf("Teste hex upper: %X\n", 255);
	ft_printf("Teste de percentagem: %%\n");
	printf("Teste percent: %%\n");
	ft_printf("Teste mix: %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("Teste mix: %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	return (0);
}
