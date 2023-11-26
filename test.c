#include "ft_printf.h"

int main (void)
{
	ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
	printf(" %p %p %p %p\n", LONG_MIN, LONG_MAX, LONG_MIN, LONG_MAX);
}
