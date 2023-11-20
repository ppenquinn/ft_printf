/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 06:33:30 by nappalav          #+#    #+#             */
/*   Updated: 2023/11/20 12:49:35 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_pos(unsigned int nbr, char *base)
{
	unsigned int	div;
	char			ans;
	int				i;

	i = 0;
	div = ft_strlen(base);
	if (nbr >= div)
	{
		ft_printf_pos(nbr / div, base);
		nbr %= div;
	}
	ans = base[nbr];
	write(1, &ans, 1);
	i++;
	return (i);
}

int	ft_printf_nbr(int nbr)
{
	char	ans;
	int		i;

	i = 0;
	if (nbr < 0 && nbr > -10)
		write(1, "-", 1);
	if (nbr >= 10 || nbr <= -10)
	{
		ft_printf_nbr(nbr / 10);
		nbr %= 10;
	}
	if (nbr >= 0)
		ans = '0' + nbr;
	else
		ans = '0' - nbr;
	write(1, &ans, 1);
	i++;
	return (i);
}
