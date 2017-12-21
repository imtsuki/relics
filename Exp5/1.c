#include <stdio.h>

int gcd(int a, int b) {
	return (b == 0) ? a : gcd(b, a%b);
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int d = gcd(a, b);
	int lcm = a / d * b;
	printf("The greatest common divisor is %d and the lowest common multiple is %d.", d, lcm);
	return 0;
}