#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    if (num1 < num2)    // a가 b보다 작을 때는
        return -1;      // -1 반환

    if (num1 > num2)    // a가 b보다 클 때는
        return 1;       // 1 반환

    return 0;
}

int main()
{
	int arr[1000000] = {0,};
	int num = 0;

	scanf("%d",&num);
	for (int i = 0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}

	qsort(arr,num,sizeof(int),compare);

	for (int i = 0; i<num; i++)
	{
		printf("%d\n",arr[i]);
	}

	return 0;
}
