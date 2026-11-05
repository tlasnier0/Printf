/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 05:28:53 by tlasnier          #+#    #+#             */
/*   Updated: 2026/11/05 22:28:22 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_sort_int(int arg, char key)
{
	if(key == 'c')
		return (ft_display_char(arg));
	else
		return (ft_display_nbr(arg));
}

int ft_sort_unsigned_int(unsigned int arg, char key)
{
	if(key == 'u')
		return (ft_display_nbr(arg));
	if(key == 'x')
		return ();
	if(key == 'X')
		return ();
}
