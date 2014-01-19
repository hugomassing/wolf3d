/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 14:42:09 by hmassing          #+#    #+#             */
/*   Updated: 2013/11/27 10:56:32 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	char	d;

	src = (char *)s;
	d = c;
	while (n--)
	{
		if (*src == d)
			return (void*)src;
		src++;
	}
	return (NULL);
}
