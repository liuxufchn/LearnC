void print_arr(int arr[], int len)
{
	printf("[");
	for (int i = 0; i < len - 1; ++i)
	{
		printf("%d, ", arr[i]);
	}
	printf("%d]\n", arr[len - 1]);
}