/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 21:53:51 by tlasnier          #+#    #+#             */
/*   Updated: 2026/11/05 23:28:53 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_display_char(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_display_str(char *str)
{
    if(!str)
        return(ft_display_str("(null)"));
    write(1, str, ft_strlen(str));
    return(ft_strlen(str));
}

int	ft_display_nbr(long int n)
{
	char	c;
	int 	j;

	j = 0;
	c = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
		j++;
	}
	if (n > 9)
	{
		j += ft_display_nbr(n / 10);	
	}
	c = n % 10 + 48;
	write(1, &c, 1);
	return (++j);
}

int ft_display_ptr(void *ptr)
{
    if(!ptr)
        return(ft_display_str("(nil)"));
    ft_display_str("0x");
    return(ft_display_hex((unsigned long int)ptr, 0) + 2);   
}

int ft_display_hex(unsigned long int n, int is_uppercase)
{
    
}