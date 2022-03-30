#include <stdio.h>
#define bool int
#define true 1
#define false 0

int main() {
	int a = 3;
	int b = 1;
	bool p = false;

	for (int i = 0; i <= 29; i++) {
		int result = 0;

		if (p == true) {
			result = a + b + 1;
			p = false;
		} else {
			result = a + b - 1;
			p = true;
		}

		b = result;
		a = result;
		printf("%d. number: %d\n", i, result);
	}
	return 0;
}