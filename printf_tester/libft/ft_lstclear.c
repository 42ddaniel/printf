/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:37:46 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/21 16:51:59 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;
	t_list	*temp;

	if (!lst || !del)
		return ;
	head = *lst;
	while (head)
	{
		temp = head -> next;
		(*del)(head -> content);
		free(head);
		head = temp;
	}
	*lst = 0;
}
