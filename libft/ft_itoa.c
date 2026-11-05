/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 01:46:56 by tlasnier          #+#    #+#             */
/*   Updated: 2026/11/05 22:27:56 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	charlen(long int n)
{
	int	length;

	length = 0;
	if (n < 0)
		length++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(long int n)
{
	char	*res;
	int		i;
	long	nb;

	i = charlen(n);
	res = malloc(sizeof(char) * (charlen(n) + 1));
	if (!res)
		return (NULL);
	res[i--] = 0;
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		res[i--] = (n % 10) + 48;
		n = n / 10;
	}
	return (res);
}
