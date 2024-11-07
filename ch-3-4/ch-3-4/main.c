#include <stdio.h>
unsigned long long int f(unsigned int n)
{
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	unsigned long long int first = 0, second = 1, fib;
	for (unsigned int i = 2; i <= n; i++) {
		fib = first + second;
		first = second;
		second = fib;
	}
	return fib;
}
int main() {
	unsigned int n;
	printf("Please enter a value of n:");
	scanf_s("%u", &n);
	printf("The %u term of the fee series is: %10u\n", n, f(n));
	return 0;
}
