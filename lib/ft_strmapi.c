/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:20:24 by hmassing          #+#    #+#             */
/*   Updated: 2013/11/27 12:16:08 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	size_t	len;
	char	*strnew;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	len = (size_t)ft_strlen(s);
	strnew = ft_strnew(len);
	i = 0;
	while (s[i] != '\0')
	{
		strnew[i] = (*f)(i, s[i]);
		i++;
	}
	return (strnew);
}
