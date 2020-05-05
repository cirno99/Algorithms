#include <cstdio>
#include <cstdlib>
#define ELEMENT_COUNT 50000

using namespace std;

int n, d[ELEMENT_COUNT];

void insertion_sort()
{
	for (int i = 1; i < n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (d[j] < d[j - 1])
			{
				int temp = d[j];
				d[j] = d[j - 1];
				d[j - 1] = temp;
			}
			else
			{
				break;
			}
		}
	}
}

int main()
{
	n=50000;
	// scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		// scanf("%d", &d[i]);
		d[i] =rand();
	}
	insertion_sort();
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", d[i]);
	}
	return 0;
}
