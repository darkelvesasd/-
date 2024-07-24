#include<stdio.h>
void sort(int*a, int left,int right )
{
	if (right <= left)
	{
		return;
	}
	int begin = left;
	int end = right;
	int v = a[left];
	while (left < right)
	{
		while (a[right] >= v && left < right)
		{
			right--;
		}
		a[left] = a[right];
		while (a[left]<=v&&left<right)
		{
			left++;
		}
		a[right] = a[left];
	}
	a[left] = v;
	sort(a, begin, left - 1);
	sort(a, left + 1, end);
}
int main()
{
	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
	sort(a,0,9);
	for (int i = 0; i < 10; i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
