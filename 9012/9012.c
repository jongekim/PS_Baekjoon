#include <stdio.h>
#include <string.h>

int main()
{
	int		num = 0;
	int check = 0;
	char	str[50];
	int print_index = 0;


	scanf("%d",&num);

	for(int i = 0; i<num; i++)
	{
		check = 0;
		print_index = 0;
		scanf("%s",&str);
		for (int j =0; str[j]; j++)
		{
			if(str[j] == '(')
				check++;
			else if(str[j] == ')')
				check--;

			if(check < 0)
			{
				printf("NO\n");
				print_index = 1;
				break;
			}
		}
		if (check == 0 && print_index ==0)
			printf("YES\n");
		else if(print_index == 0 && check != 0)
			printf("NO\n");
	}

	return 0;
}
