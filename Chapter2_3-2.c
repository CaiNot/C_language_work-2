#include <stdio.h>
#include <stdlib.h>


void main()
{
	char str[100], cpy[100];
	int n = 0;
	int s = 0;
	scanf("%d", &n);
	getchar();
	int k = 0;

	for (int a = 0; a < n; ++a)
	{
		for (s=0;;++s)
		{
			if ((str[s] = getchar()) != '\n');			
			else
				break;
		}
		str[s] = '\0';
		for (int i = 0;; ++i)
		{
			if (str[i] == '\0')
				break;

			if (str[i] == ' '&&str[i + 1] != ' ')
			{
				cpy[k] = ' ';
				++k;
				continue;
			}
			if (str[i] == ' ')
			{
				continue;
			}

			cpy[k] = str[i];
			++k;
		}
		cpy[k] = '\0';
		printf("%s\n",cpy);
		k = 0;
	}
	

}