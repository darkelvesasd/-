#include<stdio.h>
void sort(int*a,int left,int right)
{
	if (left >= right)
	{
		return;
	}
	int cur = left+1;
	int pre = left;
	int lefti = a[left];
	int t = 0;
	while (cur <=right)
	{
		if (a[cur]<lefti && ++pre!=cur)
		{
			t = a[cur];
			a[cur] = a[pre];
			a[pre] = t;
		}
		cur++;
	}
	t = a[pre];
	a[pre] = lefti;
	a[left] = t;
	sort(a,left,pre-1);
	sort(a,pre+1,right);
}

int main()
{
	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
	sort(a,0,9);
	return 0;
}
