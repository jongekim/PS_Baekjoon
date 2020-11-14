#include <stdio.h>

int main()
{
	int n = 0;
	int arr[500000]={0,};

	scanf("%d",&n);

	for(int i =0; i<n; i++)
	{
		arr[i] = i+1;
	}

	if(n%2==0){
	for(int i = 0; i<n-1; i++)
	{
		arr[0] = 0;
		arr[n-i] = arr[1];
		arr[1] = 0;
		for(int j = 0; j<n-i; j++)
		{
			arr[j] = arr[j+2];
		}
		/*
		for(int z = 0; z<n; z++)
		{
			printf("%d: %d\n",z,arr[z]);
		}
		printf("\n\n");
		*/
	}
	printf("%d\n",arr[1]);
	}

	if(n%2==1){
		for(int i = 0; i<n-2; i++)
     {
         arr[0] = 0;
         arr[n-i] = arr[1];
         arr[1] = 0;
         for(int j = 0; j<n-i; j++)
         {
             arr[j] = arr[j+2];
         }
		 /*
         for(int z = 0; z<n; z++)
         {
             printf("%d: %d\n",z,arr[z]);
         }
         printf("\n\n");
		 */
     }
     printf("%d\n",arr[1]);
     }
	return 0;
}
