/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:20:46 by hmassing          #+#    #+#             */
/*   Updated: 2014/01/19 19:33:02 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char			*tmp;
	char			*tmp2;
	size_t			i;
	unsigned char	var;

	i = 0;
	var = (unsigned char)c;
	tmp = (char*)s1;
	tmp2 = (char*)s2;
	while (i < n)
	{
		if (tmp2[i] == c)
		{
			tmp[i] = tmp2[i];
			i++;
			return (tmp + i);
		}
		tmp[i] = tmp2[i];
		i++;
	}
	return (NULL);
}
