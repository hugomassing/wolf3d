/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 12:02:09 by hmassing          #+#    #+#             */
/*   Updated: 2013/11/27 12:03:18 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i <= n)
	{
		i++;
	}
	if (s1[i] > s2[i] || s1[i] < s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return (0);
	}
}

