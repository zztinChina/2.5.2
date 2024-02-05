void hehe(int arr[], int si)
{
	int i = 0;
	for (i = 0; i < si - 1; i++)
	{
		int tem = 0;
		int j = 0;
		for (j = 0; j < si - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
}
#include<stdio.h>
#include<string>
int main()
{
	int arr[] = { 2,3,43,11,5,43,333,45 };//一共八个元素
	int sz = sizeof(arr) / sizeof(arr[1]);
	int i = 0;
	hehe(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
}
