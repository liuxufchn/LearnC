#include <stdio.h>

int main01()
{
	/*
		extern：表示声明，没有内存空间，不能提升
		const：限定一个变量为只读变量
		volatile：防止编译器优化代码
		register：定义一个寄存器变量
	*/

	volatile int flg = 0;  // 指示灯亮/灭
	flg = 1;
	flg = 0; // volatile 防止打码被优化

	register int a = 1;  // 建议型指令
	register int b = 2;
	register int c;
	c = a + b;
	printf("c = %d\n", c);

	return 0;
}

int main(void)
{
	char str[5] = { 'h', 'e', 'l', 'l', 'o' };
	char test[] = "lksjdlfkajsldkjflsjdlfjsldjfklsdfjlsdf";

	printf("str = %s\n", str); // str = hello烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫蘬ksjdlfkajsldkjflsjdlfjsldjfklsdfjlsdf

	return 0;
}