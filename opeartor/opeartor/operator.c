#include <stdio.h>

int main01()
{
	/*
		extern����ʾ������û���ڴ�ռ䣬��������
		const���޶�һ������Ϊֻ������
		volatile����ֹ�������Ż�����
		register������һ���Ĵ�������
	*/

	volatile int flg = 0;  // ָʾ����/��
	flg = 1;
	flg = 0; // volatile ��ֹ���뱻�Ż�

	register int a = 1;  // ������ָ��
	register int b = 2;
	register int c;
	c = a + b;
	printf("c = %d\n", c);

	return 0;
}

int main(void)
{
	char c = 'a';

	return 0;
}