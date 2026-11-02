/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 05:26:47 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/09 06:01:06 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		j;
	int		k;

	va_start(args, format);
	i = 0;
	j = 0;
	k = 0;
	while(format[i])
	{
		if(format[i] == '%' && format[i + 1] == 'c')
			j += ft_putchar(va_arg(args, int));
			//le reste
		if(format[i] == '%' && format[i++ + 1] == '%')
			j += ft_putchar('%');
	}
}
