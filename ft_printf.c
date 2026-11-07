/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 05:26:47 by tlasnier          #+#    #+#             */
/*   Updated: 2026/11/07 14:03:32 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_type_selector(va_list args, char key)
{
	if (key == 'c' || key == 'd' || key == 'i')
		return (ft_sort_int(va_arg(args, int), key));
	else if (key == 'u' || key == 'x' || key == 'X')
		return (ft_sort_unsigned_int(va_arg(args, unsigned int), key));
	else if (key == 's')
		return (ft_display_str(va_arg(args, char *)));
	else if (key == 'p')
		return (ft_display_ptr(va_arg(args, void *)));
	else if (key == '%')
		return (ft_display_char('%'));
	else
		return (ft_display_char(key));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		j;

	va_start(args, format);
	i = 0;
	j = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			j += ft_type_selector(args, format[i]);
		}
		else
			j += ft_display_char(format[i]);
		i++;
	}
	va_end(args);
	return (j);
}

/*#include <stdio.h>

int	main(void)
{
	char			c;
	char			*str;
	int				nbr;
	unsigned int	u;
	unsigned int	hex;
	void			*ptr;
	int				r1;
	int				r2;

	c = 'Z';
	str = "Bonjour";
	nbr = -42;
	u = 3000000000;
	hex = 0xabcdef;
	ptr = &nbr;
	r1 = ft_printf("ft_printf:   c=[%c] s=[%s] p=[%p] d=[%d]\n",
			c, str, ptr, nbr);
	r2 = printf("printf:      c=[%c] s=[%s] p=[%p] d=[%d]\n",
			c, str, ptr, nbr);
	printf("ret ft: %d | ret real: %d\n\n", r1, r2);
	r1 = ft_printf("ft_printf:   i=[%i] u=[%u] x=[%x] X=[%X] [%%]\n",
			1337, u, hex, hex);
	r2 = printf("printf:      i=[%i] u=[%u] x=[%x] X=[%X] [%%]\n",
			1337, u, hex, hex);
	printf("ret ft: %d | ret real: %d\n", r1, r2);
	return (0);
}*/
