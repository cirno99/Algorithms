#include <cstdio>
#include <cstdlib>

using namespace std;

<<<<<<< HEAD
int data[50000];
=======
int data[1000];
>>>>>>> c10d4c212fa1fbf8b9fb3c781d61f41e75e96aaa

void bubble_sort(int *d, int n)
{
	for (int k = 1; k < n; k++)
	{
		for (int i = 1; i < n; i++)
		{
			if (d[i] < d[i - 1])
			{
				int temp = d[i];
				d[i] = d[i - 1];
				d[i - 1] = temp;
			}
		}
	}
}
<<<<<<< HEAD
//冒泡排序
void BubbleSort1(int *arr, size_t size)
{
	int i = 0, j = 0;

	for (i = 0; i < size - 1; i++) //一共要排序size-1次
	{
		for (j = 0; j < size - 1 - i; j++) //选出该趟排序的最大值往后移动
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
//冒泡排序优化1
void BubbleSort2(int *arr, size_t size)
{
	int i = 0, j = 0;

	for (i = 0; i < size - 1; i++) //一共要排序size-1次
	{
		//每次遍历标志位都要先置为0，才能判断后面的元素是否发生了交换
		int flag = 0;

		for (j = 0; j < size - 1 - i; j++) //选出该趟排序的最大值往后移动
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1; //只要有发生了交换，flag就置为1
			}
		}

		//判断标志位是否为0，如果为0，说明后面的元素已经有序，就直接return
		if (flag == 0)
		{
			return;
		}
	}
}

//冒泡排序优化2
void BubbleSort3(int *arr, size_t size)
{
	int i = 0, j = 0;
	size_t end = size - 1, start = 0; //pos变量用来标记循环里最后一次交换的位置
	size_t startPos = start, endPos = end;
	for (i = 0; i < size - 1; i++) //一共要排序size-1次
	{
		// 从前向后
		//每次遍历标志位都要先置为0，才能判断后面的元素是否发生了交换
		int flag = 0;

		for (j = 0; j < end; j++) //选出该趟排序的最大值往后移动
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;	//只要有发生了交换，flag就置为1
				endPos = j; //循环里最后一次交换的位置 j赋给pos
			}
		}

		end = endPos;
		//判断标志位是否为0，如果为0，说明后面的元素已经有序，就直接return
		if (flag == 0)
		{
			return;
		}
		// 从后向前
		for (j = 0; j > start; j--) //选出该趟排序的最大值往后移动
		{
			if (arr[j] < arr[j - 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
				flag = 1;	  //只要有发生了交换，flag就置为1
				startPos = j; //循环里最后一次交换的位置 j赋给pos
			}
		}

		start = startPos;
		//判断标志位是否为0，如果为0，说明后面的元素已经有序，就直接return
		if (flag == 0)
		{
			return;
		}
	}
}

int main()
{
	for (int i = 0; i < 50000; i++)
	{
		data[i] = rand();
	}

	// bubble_sort(data, 50000);
	BubbleSort1(data, 50000);

	for (int i = 0; i < 50000; i++)
	{
		printf("%d\n", data[i]);
	}

=======

int main()
{
	for (int i = 0; i < 1000; i++)
	{
		data[i] = rand();
	}
	
	bubble_sort(data, 1000);
	
	for (int i = 0; i < 1000; i++)
	{
		printf("%d\n", data[i]);
	}
	
>>>>>>> c10d4c212fa1fbf8b9fb3c781d61f41e75e96aaa
	return 0;
}
