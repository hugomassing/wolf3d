/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 16:18:01 by hmassing          #+#    #+#             */
/*   Updated: 2013/12/18 16:18:08 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*putnbr_to_str(int len, int n, int neg)
{
	char		*str;

	if (!(str = (char*)malloc(sizeof(*str) * len + 1)))
		return (NULL);
	str[len--] = '\0';
	if (neg)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[len--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	int			len;
	int			neg;
	int			tmp;

	tmp = n;
	len = 0;
	neg = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		len++;
		n *= -1;
		neg = -1;
	}
	if (tmp == 0)
		len++;
	while (tmp)
	{
		len++;
		tmp = tmp / 10;
	}
	return (putnbr_to_str(len, n, neg));
}
