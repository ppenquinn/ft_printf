/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:29:35 by nappalav          #+#    #+#             */
/*   Updated: 2023/11/20 13:33:59 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("%s %s","Hello", "World");
	ft_printf("%c %c %c\n",'a','b','c');
	printf("%c %c %c\n",'a','b','c');
}