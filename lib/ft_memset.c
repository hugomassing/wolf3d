/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:12:09 by hmassing          #+#    #+#             */
/*   Updated: 2013/11/27 10:49:07 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	c2;
	char			*str;
	size_t			i;

	i = 0;
	c2 = (unsigned char)c;
	str = b;
	while (i < len)
	{
		str[i] = c2;
		i++;
	}
	return (str);
}
