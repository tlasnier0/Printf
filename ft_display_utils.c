/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 21:53:51 by tlasnier          #+#    #+#             */
/*   Updated: 2026/11/05 22:26:42 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_display_char(int c)
{
    write(1, (unsigned char)&c, 1);
    return (1);
}

int ft_display_str(char *str)
{
    write(1, str, ft_strlen(str));
    return(ft_strlen(str));
}

int ft_display_nbr(long int nbr)
{
    return(ft_display_str(ft_itoa(nbr)));
}

int ft_display_ptr(void *ptr)
{
    if(!ptr)
        return(ft_display_str("(nil)"));
}