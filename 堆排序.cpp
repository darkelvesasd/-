#include<iostream>
#include<string>
using namespace std;
void Swap(int *a,int*b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void Adjustdown(int*arr,int n,int root)
{
	int parent = root;
	int child = parent * 2+1;
	while (parent <= n)
	{
		if (arr[child] < arr[child + 1]&&child+1<=n)
		{
			child++;
		}
		if (arr[child] > arr[parent]&&child<=n)
		{
			Swap(&arr[child],&arr[parent]);
			parent = child;
		}
		else
		{
			break;
		}
	}
}
void Heapsort(int*arr,int n)
{
	for (int i = (n-1)  / 2; i >= 0; i--)
	{
		Adjustdown(arr,n,i);
	}
	for (int i=0;i<=n;i++)
	{
		Swap(&arr[n-i], &arr[0]);
		Adjustdown(arr, n-i-1, 0);
	}
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	Heapsort(arr, 9);
	return 0;
}
