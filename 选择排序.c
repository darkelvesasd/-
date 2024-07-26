#include<stdio.h>
#define LEN(arr)(sizeof(arr)/sizeof(arr[0]))
void select_sort(int *a,int len)
{
	for(int i=0;i<len-1;i++)
	{
		int m=i;
		for(int j=i+1;j<len;j++)
		{
			if(a[j]<a[i])
			{
				m=j;
			}
		}
		int t=a[i];
		a[i]=a[m];
		a[m]=t;
	}
}
int main()
{
	int a[]={9,8,7,6,5,4,3,2,1,0};
	select_sort(a,LEN(a));
	for(int i=0;i<LEN(a);i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
