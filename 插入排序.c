#include<stdio.h>
#define LEN(arr)(sizeof(arr)/sizeof(arr[0]))
void insert_sort(int* a, int len)
{
	for (int i = 1; i < len; i++)
	{
		int v = a[i];
		int j = i-1;
		while (j >= 0 && v < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] =v;
	}
}
int main()
{
	int a[] = { 9,8,7,6,5,4,3,2,1,0 };
	insert_sort(a, LEN(a));
	for (int i = 0; i < LEN(a); i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}
