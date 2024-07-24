#include<stdio.h>
void sort(int*a, int left,int right )
{
	if (left >= right)
	{
		return;
	}
	int lefti = left;
	int t = 0;
	int end = right;
	while (left < right)
	{
		while (a[right] >= a[lefti] && left < right)
		{
			right--;
		}
		while (a[left] <= a[lefti] && left < right)
		{
			left++;
		}
		t = a[right];
		a[right] = a[left];
		a[left] = t;
	}
	t = a[lefti];
	a[lefti] = a[left];
	a[left] = t;
	sort(a,lefti,left-1);
	sort(a,left+1,end);
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
