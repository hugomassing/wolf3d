/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 11:27:20 by hmassing          #+#    #+#             */
/*   Updated: 2014/01/19 19:28:34 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

list		*ft_new_list(int data)
{
	list	*new;

	new = malloc(sizeof(new));
	if (new)
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}

list		*ft_add_end_list(list *l, int data)
{
	list	*tmp;

	tmp = l;
	if (l != NULL)
	{
		while (l->next != NULL)
			l = l->next;
		l->next = ft_new_list(data);
	}
	else
	{
		l = ft_new_list(data);
		return (l);
	}
		return (tmp);
}
