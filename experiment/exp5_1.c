#include<stdio.h>

void print(int a[],int n);
double average(int a[],int n);
int maxnum(int a[], int n);
int minnum(int a[], int n);
void find(int a[], int x, int n);
void BubbleSort(int a[], int n);
int main()
{
	int array[10] = {0};
	int i, x, n;
	//输入数组元素
	printf("请输入数组长度(1到10之间):");
	scanf_s("%d",&n);
	printf("请输入数组元素:");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &array[i]);
	}
	printf("请输要查找的元素:");
	scanf_s("%d", &x);
	find(array, x, n);
	printf("数组元素平均值为:%lf\n", average(array, n));
	printf("数组元素最大值为:%d\n", maxnum(array, n));
	printf("数组元素最小值为:%d\n", minnum(array, n));
	BubbleSort(array, n);
	printf("数组排序结果:\n");
	print(array, n);
	return 0;
}

//输出数组元素
void print(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

//求数组元素平均值
double average(int a[], int n)
{
	int i, sum = 0;
	double ave;
	for (i = 0; i < n; i++)
	{
		sum += a[i];
	}
	ave = sum / (n*1.0);
	return ave;
}

//数组元素最大值
int maxnum(int a[], int n)
{
	int i = 0, max;
	max = a[i];
	for (i; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

//数组元素最小值
int minnum(int a[], int n)
{
	int i = 0, min;
	min = a[i];
	for (i; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}

//查找元素
void find(int a[], int x, int n)
{
	int i = 0, j, sum = 0;
	int b[10] = { 0 };
	while (i < n)
	{
		if (x == a[i])
		{
			b[i] = 1;
		}
		i++;
	}
	for (j = 0; j < n; j++)
	{
		if (b[j]==1)
		{
			printf("此元素在数组中位于索引%d\n", j);
		}
		sum += b[j];
	}
	if (sum == 0)
	{
		printf("没有在数组中找到此元素！\n");
	}
}

//数组元素排序
void BubbleSort(int a[], int n)
{
	int i, j, temp;
	for (i = 0; i < n-1; i++)
	{
		for (j = n-1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
}