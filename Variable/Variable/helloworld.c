#include <stdio.h> // #���ؼ���ʶ������ʾ����ͷ�ļ���include������ͷ�ļ��ؼ���
					// stdio.h��ϵͳ��׼���롢������Ӧ��ͷ�ļ�
					// <>��ʹ��ϵͳ�⺯���� ""���û��Զ���⺯��

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