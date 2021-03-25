#include <cstdio>

int step_function(int x) {
	if (x < 0)
		return -1;
	else if (x > 0)
		return 1;
	return 0;
}

int main() {
	printf("Num1: %d, Step: %d\n", 42, step_function(42));
	printf("Num2: %d, Step: %d\n", 0, step_function(0));
	printf("Num3: %d, Step: %d\n", -32767, step_function(-32767));
}
