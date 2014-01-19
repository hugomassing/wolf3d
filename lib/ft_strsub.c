/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 17:40:27 by hmassing          #+#    #+#             */
/*   Updated: 2013/12/07 18:18:19 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*strsub;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	strsub = malloc(len + 1);
	while (i < (start + len))
	{
		if (i >= start)
			strsub[i - start] = s[i];
		i++;
	}
	strsub[start + len] = '\0';
	return (strsub);
}
