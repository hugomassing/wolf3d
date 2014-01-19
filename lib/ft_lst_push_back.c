/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/19 19:34:25 by hmassing          #+#    #+#             */
/*   Updated: 2014/01/19 19:34:30 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_push_back(t_list **begin, void *c, size_t content)
{
	t_list	*old;
	t_list	*new;

	old = *begin;
	new = ft_lstnew(c, content + 1);
	if (!old)
		*begin = new;
	else
	{
		while (old->next != NULL)
			old = old->next;
		old->next = new;
	}
}
