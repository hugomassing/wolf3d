/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:11:45 by hmassing          #+#    #+#             */
/*   Updated: 2014/01/19 19:33:25 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *s1, const void *s2, size_t n)
{
	const char	*src;
	char		*dest;

	src = s2;
	dest = s1;
	if (dest <= src || src >= (dest + n))
	{
		while (n--)
		{
			*dest++ = *src++;
		}
	}
	else
	{
		src = src + n - 1;
		dest = dest + n - 1;
		while (n--)
		{
			*dest-- = *src--;
		}
	}
	return (s1);
}
