#include <stdio.h>
#include <string.h>

int main()
{
	int		num = 0;
	int check = 0;
	char	str[50];


	scanf("%d",&num);

	for(int i = 0; i<num; i++)
	{
		check = 0;
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
				return 0;
			}
		}
		if (check == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
