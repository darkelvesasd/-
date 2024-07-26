#include<stdio.h>
#define LEN(arr)(sizeof(arr)/sizeof(arr[0]))
int bubble_sort(int *a,int len)
{
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int main()
{
	int a[]={9,8,7,6,5,4,3,2,1,0};
	bubble_sort(a,LEN(a));
	for(int i=0;i<LEN(a);i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
