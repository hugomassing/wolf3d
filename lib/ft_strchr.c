/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:36:37 by hmassing          #+#    #+#             */
/*   Updated: 2014/01/19 19:20:48 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	if (s[0] == ch)
	{
		return ((char*)s);
	}
	while (*s++)
	{
		if (*s == ch)
		{
			return ((char*)s);
		}
	}
	return (NULL);
}
