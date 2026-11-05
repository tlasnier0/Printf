/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 05:40:01 by tlasnier          #+#    #+#             */
/*   Updated: 2026/11/05 22:30:48 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

// libft
char    *ft_itoa(long int n);
size_t  ft_strlen(const char *str);

// ft_sort_utils.c
int     ft_sort_int(int arg, char key);
int     ft_sort_unsigned_int(unsigned int arg, char key);

// ft_display_utils.c
int     ft_display_char(int c);
int     ft_display_str(char *str);
int     ft_display_nbr(int nbr);
int     ft_display_ptr();

#endif
