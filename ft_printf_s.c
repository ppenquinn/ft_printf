/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:06:34 by nappalav          #+#    #+#             */
/*   Updated: 2023/11/20 13:06:24 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	else
		return (write(1, str, ft_strlen(str)));
}
