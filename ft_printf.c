/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:23:35 by nappalav          #+#    #+#             */
/*   Updated: 2023/11/23 16:33:44 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	pick_mode(char mode, va_list arg)
{
	int	cnt;

	cnt = 0;
	if (mode == 'c')
		cnt = ft_printf_c(va_arg(arg, int));
	else if (mode == 's')
		cnt = ft_printf_s(va_arg(arg, char *));
	else if (mode == 'd' || mode == 'i')
		cnt += ft_printf_d(va_arg(arg, int));
	else if (mode == 'X')
		cnt += ft_printf_u(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (mode == 'x')
		cnt += ft_printf_u(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (mode == 'u')
		cnt += ft_printf_u(va_arg(arg, unsigned int), "0123456789");
	else if (mode == '%')
		cnt += ft_printf_c('%');
	return (cnt);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
			cnt += pick_mode(str[++i], arg);
		else
		{
			ft_printf_c(str[i]);
			cnt++;
		}
		i++;
	}
	va_end(arg);
	return (cnt);
}
