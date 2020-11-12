#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
    int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    if (num1 < num2)    // a가 b보다 작을 때는
        return -1;      // -1 반환

    if (num1 > num2)    // a가 b보다 클 때는
        return 1;       // 1 반환

    return 0;    // a와 b가 같을 때는 0 반환
}

int main()
{
	int num_c = 0;
	int num_f = 0;
	int card[500000];
	int find[500000];
	int check = 0;
	int index = 0;

	scanf("%d", &num_c);
	for(int i = 0; i<num_c; i++)
	{
		scanf("%d", &card[i]);
	}
	scanf("%d", &num_f);
	for(int i = 0; i<num_f; i++)
	{
		scanf("%d", &find[i]);
	}

	qsort(card, num_c, sizeof(int), compare);

	for(int i = 0; i<num_f; i++)
	{
		check = 0;
		index = 0;
		for(int j = 0; j<num_c; j++)
		{
			if(card[j] == find[i])
			{
				check++;
				index = 1;
			}
			else if(card[j] != find[i] && index == 1)
			{
				break;
			}
		}
		printf("%d",check);
		if(i != num_f-1)
			printf(" ");
	}

	return 0;
}
