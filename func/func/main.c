#include <stdio.h>
#include <string.h>
#include "sort_demo.h"
#include "print_arr.h"


void count();

int main()
{
	//count();
	int arr[] = { 3, 4, 6, 7, 8, 22, 99, 43, 0, 56 };
	int len = sizeof(arr) / sizeof(arr[0]);

	bubblesort(arr, len);

	print_arr(arr, len);

	return 0;
}

void count()
{
	char s[100];
	//printf("%s\n", gets(s));

	fgets(s, 100, stdin);

	// 统计26个英文字母出现的次数
	int count[26] = { 0 };
	int len = sizeof(count) / sizeof(count[0]);
	for (int i = 0; i < len; ++i)
	{
		count[s[i] - 'a']++;
	}

	for (int i = 0; i < len; ++i)
	{
		if (count[i] != 0) printf("%c的个数为：%d\n", 'a' + i, count[i]);
	}
}