/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:05:37 by hmassing          #+#    #+#             */
/*   Updated: 2013/11/27 12:18:10 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]) && (i < n))
	{
		i++;
	}
	if (ft_strlen(s1) < n)
	{
		if (i == ft_strlen(s1))
		{
			return (1);
		}
	}
	else
	{
		if (i == n)
		{
			return (1);
		}
	}
	return (0);
}
