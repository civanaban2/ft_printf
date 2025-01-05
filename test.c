#include <stdio.h>
#include "ft_printf.h"	

int main() {
	char c = 'c';
	char *s = "string";
	int i = 42;
	unsigned int u = 42;
	unsigned int x = 42;
	unsigned int X = 42;
	unsigned long long p = 42;
	int len = 0;
	int *ptr = NULL;

	int a = printf(" %p %p \n", ptr, ptr);
	int b = ft_printf(" %p %p \n", 0, 0);
}