/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:32:22 by nappalav          #+#    #+#             */
/*   Updated: 2023/11/18 18:32:21 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_printf_c(int c);
int	ft_printf_s(char *str);
int	ft_printf_pos(unsigned int nbr, char *base);
int	ft_printf_nbr(int nbr);

#endif
