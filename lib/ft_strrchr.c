/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:41:53 by hmassing          #+#    #+#             */
/*   Updated: 2014/01/19 19:21:12 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*ptr;

	ch = (char)c;
	ptr = NULL;
	if (s[0] == ch)
	{
		return ((char*)s);
	}
	while (*s++)
	{
		if (*s == ch)
		{
			ptr = (char*)s;
		}
	}
	return (ptr);
}
