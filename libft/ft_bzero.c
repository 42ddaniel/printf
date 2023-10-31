/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:29:58 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/21 15:00:50 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*d;

	d = s;
	while (n)
	{
		*d = 0;
		d++;
		--n;
	}
}
/*
int main()
{
    char buffer[] = "Hello big big big big big world";

    printf("Buffer antes de chamar ft_bzero: %s\n", buffer);
    ft_bzero(buffer, 1);
    printf("Buffer depois de chamar ft_bzero: %s\n", buffer);
    return (0);
}*/
