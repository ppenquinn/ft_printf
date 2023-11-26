/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:16:09 by nappalav          #+#    #+#             */
/*   Updated: 2023/11/26 17:27:09 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_lpos(unsigned long nbr, char *base, unsigned int div)
{
	char			ans;

	if (nbr >= div)
	{
		ft_printf_lpos(nbr / div, base, div);
		nbr %= div;
	}
	ans = base[nbr];
	write(1, &ans, 1);
}

int	ft_printf_p(unsigned long nbr, char *base)
{
	unsigned long	div;
	unsigned long	temp;
	int				length;

	length = 0;
	temp = nbr;
	div = ft_strlen(base);
	write(1, "0x", 2);
	if (temp == 0)
		length++;
	while (temp > 0)
	{
		temp /= div;
		length++;
	}
	ft_printf_lpos(nbr, base, div);
	return (2 + length);
}

// int	ft_printf_p(unsigned long nbr, char *base)
// {
// 	write(1, "0x", 2);
// 	return (2 + ft_printf_ul(nbr, base));
// }
