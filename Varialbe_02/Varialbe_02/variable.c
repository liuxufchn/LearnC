#include <stdio.h>

int main()
{
	/*
		变量的定义： int a = 40;
		变量的声明： 1）int a; 没有变量值的变量定义 叫做声明
					2） extern int a; 添加了关键字

		1. 变量定义会开辟内存空间。变量生命不会开辟内存空间。
		2. 当编译器编译程序时，在变量使用之前，如果没有看到变量定义，
			编译器会自动寻找一个变量声明提升为定义。
		3. 如果该变量的声明前有extern关键字，无法提升。
	*/

	/*
	extern int a;

	a = 10; // 	错误	LNK2001	无法解析的外部符号 a	

	printf("%d\n", a);
	*/

	extern int a;
	printf("%d\n", (int)sizeof a);

	printf("\'\\\'的值为%d\n", '\n');

	float f = 2.33333f;
	double d = 3.1415926539;

	printf("%5.2f\n", f);
	printf("%-5.3lf\n", d);

	return 0;
}