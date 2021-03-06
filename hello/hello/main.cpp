#include <cstdio>

int step_function(int x) {
	if (x < 0)
		return -1;
	else if (x > 0)
		return 1;
	return 0;
}

int main() {
	/* Chapter 1 */
	// printf returns the total number of characters printed or negative values for an encoding error
	printf("Num1: %d, Step: %d\n", 42, step_function(42));
	printf("Num2: %d, Step: %d\n", 0, step_function(0));
	printf("Num3: %d, Step: %d\n", -32767, step_function(-32767));

	/* Chapter 2 */
	printf("\nTypes:\n");
	unsigned short a = 0b10101010;
	printf("%hu\n", a);
	int b = 0123;
	printf("%d\n", b);
	unsigned long long d = 0xFFFFFFFFFFFF;
	printf("%lld\n", d);

	unsigned  int _d = 3669732608;
	printf("Yabba %x!\n", _d);

	return 0;
}

