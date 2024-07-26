#include<stdio.h>
#include<string.h>
#define LEN(arr)(sizeof(arr)/sizeof(arr[0]))
void Swap(int* a, int* b)
{
	int *t = *a;
	*a = *b;
	*b = t;
}
void merge_sort(int*a,int len)
{
	int gap = 1;
	int* tmp = (int*)malloc(sizeof(int) * len);
	while (gap < len)
	{
		for (int i=0;i<len;i+=gap*2)
		{
			int begin1 = i;
			int end1 = i + gap - 1;
			int begin2 = i + gap;
			int end2 = i + gap * 2 - 1;
			if (end1 >= len || begin2 >= len)
			{
				break;
			}
			if (end2 >= len)
			{
				end2 = len - 1;
			}
			int j = begin1;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}
		}
		memcpy(a, tmp, sizeof(int) * len);
		gap = gap * 2;
	}
}
int main()
{
	int a[] = { 9,8,7,6,5,4,3,2,1,0 };
	merge_sort(a,LEN(a));
	return 0;
}
