/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmassing <hmassing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:02:46 by hmassing          #+#    #+#             */
/*   Updated: 2014/01/08 15:05:32 by hmassing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int	total;
	int	signe;
	int	i;

	total = 0;
	i = 0;
	signe = 1;
	while (str[i] < 33)
	{
		i++;
	}
	if ((str[i] == '-') || (str[i] == '+'))
	{
		signe = (str[i++] == '+' ? 1 : -1);
	}
	while (str[i] != '\0' && (str[i] > 47 && str[i] < 58))
	{
		total = total * 10 + str[i++] - '0';
	}
	return (signe * total);
}
