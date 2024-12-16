#include <stdio.h>
#include "ft_printf.h"

int main(int argc, char const *argv[])
{
	//"%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%"
	int a = 5;
	unsigned int b = (unsigned int) -0x4d2;
	char c = 'a';
	printf("%d\n%d", -0x4d2, b);
	//ft_printf("%d\n",a);
	return 0;
}
