#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void narcissisticNumber();
void forLoopDemo();
void guessGame();
void showCurrentTime();
void print99();
void bubbleSort();

int main()
{
	//narcissisticNumber();

	//forLoopDemo();

	//guessGame();

	//showCurrentTime();

	//print99();

	//bubbleSort();

	int _ = 10;
	printf("%d\n", _);

	return 0;
}


void narcissisticNumber()
{
	// 列举 100 - 1000 中所有水仙花数
	int tmp, index, a, b, c;
	int sum = 0;

	for (index = 100; index < 1000; ++index)
	{
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


void forLoopDemo()
{
	int a = 1;
	int b = 2;

	for (; b = 2, a < 10; ++a)
	{
		printf("a = %d, b = %d\n", a, b);
	}

}


void guessGame()
{

	srand(time(NULL));
	int randNum = rand() % 10;

	int guess = 0;

	for (;;)
	{
		scanf("%d", &guess);
		if (guess > randNum)
		{
			printf("big.\n");
		}
		else if (guess < randNum)
		{
			printf("small.\n");
		}
		else
		{
			printf("right.\n");
			break;
		}
	}
}

void showCurrentTime()
{
	// 模拟时钟，在屏幕打印当前时间
	time_t curTime;
	int second, minutes, hour;
	for (;;)
	{
		// 获取当前时间
		curTime = time(NULL);

		// 转换成时分秒
		second = curTime % 60;
		minutes = curTime / 60 % 60;
		hour = curTime / 3600 % 24;

		// 打印输出

		printf("%02d : %02d : %02d\n", hour, minutes, second);
		// 定时打印
		Sleep(1000);
		system("cls");
	}
}

void print99()
{
	for (int i = 1; i <= 9; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("%d * %d = %d\t", j, i, i * j);
		}

		printf("\n");
	}
}

void bubbleSort()
{
	// 输入一个长度为10的数组
	int arr[10] = { 5, 6, 2, 8, 1, 4, 9, 3, 0, 7 };
	
	int length = sizeof(arr) / sizeof(arr[0]);

	for (int i = length; i > 0; --i)
	{
		for (int j = 0; j < i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < length; ++i)
	{
		printf("%d ", arr[i]);
	}
	
}