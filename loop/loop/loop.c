#include <stdio.h>

void narcissisticNumber();

int main()
{
	narcissisticNumber();

	return 0;
}


void narcissisticNumber()
{
	// 列举 100 - 1000 中所有水仙花数
	int tmp, index, a, b, c;
	int sum = 0;

	for (index = 100; index < 1000; ++index) {
		tmp = index;
		a = tmp % 10;
		tmp /= 10;
		b = tmp % 10;
		c = tmp / 10;
		sum = a * a * a + b * b * b + c * c * c;

		if (sum == index) {
			printf("%d\t", index);
		}
	}

	printf("\n");
}