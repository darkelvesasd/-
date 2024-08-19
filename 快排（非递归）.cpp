void Swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int hole(int* arr, int left, int right)
{
	int target = arr[left];
	int pre = left;
	int cur = left + 1;
	while (cur <= right)
	{
		if (arr[cur] < target&&++pre!=cur)
		{
			Swap(&arr[cur],&arr[pre]);
		}
		cur++;
	}
	Swap(&arr[left],&arr[pre]);
	return pre;
}
void quick_sort(int *arr,int left,int right)
{
	stack<int> s;
	if (right > left)
	{
		s.emplace(right);
		s.emplace(left);
	}
	while (!s.empty())
	{
		int l = s.top();
		s.pop();
		int r = s.top();
		s.pop();
		int m = hole(arr, l, r);
		if (left < m - 1)
		{
			s.emplace(m - 1);
			s.emplace(left);
		}
		if (right > m + 1)
		{
			s.emplace(right);
			s.emplace(m + 1);
		}
	}
}
