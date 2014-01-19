/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 17:20:45 by hmassing          #+#    #+#             */
/*   Updated: 2013/11/27 12:28:47 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_test_char(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*str;
	int		j;

	if (s == NULL)
		return (NULL);
	j = 0;
	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s)));
	while (ft_test_char(s[i]) == 1)
		i++;
	str = ft_strsub(s, i, ft_strlen(s) - i);
	i = 0;
	while (str[j] != '\0')
	{
		if (ft_test_char(str[j]) == 1)
			i++;
		if (ft_test_char(str[j]) == 0 && str[j + 1] != '\0')
			i = 0;
		j++;
	}
	str[ft_strlen(str) - i] = '\0';
	return (str);
}
