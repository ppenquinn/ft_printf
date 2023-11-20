/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:55:01 by nappalav          #+#    #+#             */
/*   Updated: 2023/11/19 14:36:03 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"

int main()
{
	//printf("\nMY PRINT %d\n", ft_printf("Hello %s And %s", "World", "BYE"));
	//printf("\nREAL PRINT %d", printf("Hello %s And %s", "World", "BYE"));

	printf("%x", INT_MIN );
	ft_printf("%x", INT_MIN);
	//printf("p test = %p %p %p %p %p %p %p\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	return 0;
}
