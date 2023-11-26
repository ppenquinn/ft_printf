#include "ft_printf.h"

int main (void)
{
	printf("%d\n",ft_printf(" %p %p \n", LONG_MIN, LONG_MAX));
	printf("%d\n", printf(" %p %p \n", LONG_MIN, LONG_MAX));
	//printf(" %x %x %p %p\n", LONG_MIN + 1, LONG_MAX, LONG_MIN, LONG_MAX);
}
