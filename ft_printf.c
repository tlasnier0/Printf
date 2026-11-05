/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 05:26:47 by tlasnier          #+#    #+#             */
/*   Updated: 2026/11/05 22:11:23 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		j;

	va_start(args, format);
	i = 0;
	j = 0;
	while(format[i])
	{
		if(format[i++] == '%')
		{
			if(format[i] == 'c' || format[i] == 'd' || format[i] == 'i')
				j += ft_sort_int(va_arg(args, int), format[i]);
			if(format[i] == 'u' || format[i] == 'x' || format[i] == 'X')
				j += ft_sort_unsigned_int(va_arg(args, unsigned int), format[i]);
			if(format[i] == 's')
				j += ft_display_str(va_arg(args, char *));
			if(format[i] == 'p')
				j += ft_display_ptr(va_arg(args, void *));
			if(format[i] == '%')
				j += ft_display_char('%');
			i++;
		}
	}
	return (j);
}
