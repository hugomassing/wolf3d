/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:37:54 by hmassing          #+#    #+#             */
/*   Updated: 2013/11/27 11:05:23 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*strdup;
	int		i;

	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	strdup = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (strdup == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		strdup[i] = s[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
