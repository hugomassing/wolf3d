/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:42:29 by hmassing          #+#    #+#             */
/*   Updated: 2013/11/27 11:59:43 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*tmp1;
	char	*tmp2;
	char	*tmp;

	tmp = (char*)s1;
	if (!(*s2))
		return ((char*)s1);
	while (*tmp)
	{
		tmp1 = (char*)tmp;
		tmp2 = (char*)s2;
		while ((*tmp && *tmp2) && (*tmp == *tmp2))
		{
			tmp++;
			tmp2++;
		}
		if (!*tmp2)
			return (tmp1);
		tmp = tmp1 + 1;
	}
	return (NULL);
}
