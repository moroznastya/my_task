#include <stdio.h>
#include <stdlib.h> 
#include <malloc.h>

int main()
{
	int n;
	printf("Input n:");
	scanf ("%d", &n)
	a=(int*)malloc(n * sizeof(int))


		for (int i = 0; i < n; i++)
		{
			printf("Input a[%d]:", i + 1);
			scanf("%d", &a[i]);
	    }

	x = func_arr(n, a);
	
	prinf("x=%d", x);


	
	system("pause");
	return 0;

}
int func_arr(int n, int* a)
{
	int s = 0;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		int	k = -1;

		for (j = 0; j < n; j++)
		{
			if (a[i] + a[j]) = 0;
			break;



			if j = n - 1
				k = i;











		}
		if k != -1
			return a[k];
	}

}