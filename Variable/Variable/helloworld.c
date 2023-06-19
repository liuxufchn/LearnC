#include <stdio.h> // #：关键标识符，表示引入头文件；include：引入头文件关键字
					// stdio.h：系统标准输入、输出库对应的头文件
					// <>：使用系统库函数。 ""：用户自定义库函数

int main_hello(void)
{
	printf("hello,world\n");

	system("cmd");

	system("calc");

	system("pause");

	return 0;
}


int main(void)
{
	int a;
	int b;
	int c;

	__asm
	{
		mov a, 3
		mov b, 4
		mov eax, a
		add eax, b
		mov c, eax
	}

	printf("%d\n", c);

	return 0;
}