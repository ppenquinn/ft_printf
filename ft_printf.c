/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:23:35 by nappalav          #+#    #+#             */
/*   Updated: 2023/11/19 22:58:30 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	pick_mode(char mode, void *arg)
{
	int	cnt;

	cnt = 0;
	if (mode == 'c')
		cnt = ft_printf_c(*(int *) arg);
	else if (mode == 's')
		cnt = ft_printf_s((char *) arg);
	else if (mode == 'd' || mode == 'i')
		cnt += ft_printf_nbr(*(int *) arg);
	else if (mode == 'X')
		cnt += ft_printf_pos(*(int *) arg, "0123456789ABCDEF");
	else if (mode == 'x')
		cnt += ft_printf_pos(*(int *) arg, "0123456789abcdef");
	else
	{
		printf("Not yet");
	}
	// cnt = ft_printf_s(va_arg(arg, char *));
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
			cnt += pick_mode(str[++i], va_arg(arg, void *));
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

