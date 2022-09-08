#include <stdio.h>
#include <stdlib.h>

int solve(int localMinimum, int localMaximum, int totalNumber){

    if((localMaximum + localMinimum > totalNumber - 2) 
				|| abs(localMaximum - localMinimum) > 1)
		{
			printf("-1\n");
            return 0;
		}
	
		int min = 1, max = totalNumber, flag = 0, count = -1;
		if(localMinimum >= localMaximum)
		{
			while(min != max + 1)
			{
				if((localMinimum + localMaximum > count) 
						&& (localMinimum != 0 || localMaximum != 0))
				{
					if(flag == 0)
					{
						printf("%d ", max);
						flag = 1;
						max--;
					}
					else
					{
						printf("%d ", min);
						flag = 0;
						min++;
					}
					count++;
	
				}
				else if(localMaximum == localMinimum)
				{
					printf("%d ", max);
					max--;
				}
				else
				{
					printf("%d ", min);
					min++;
				}		
			}	
		}
 
 
		if(localMaximum > localMinimum)
		{
			while(min != max + 1)
			{
				if(localMinimum + localMaximum > count)
				{
					if(flag == 0)
					{
						printf("%d ", min);
						flag = 1;
						min++;
					}
					else
					{
						printf("%d ", max);
						flag = 0;
						max--;
					}
					count++;
				}
				else
				{
					printf("%d ", max);
				       	max--;	
				}
			}
		}
		printf("\n");
}
 
int main()
{
	int nOfTestCase, totalNumber, localMaximum, localMinimum;
	scanf("%d", &nOfTestCase);
 
	while(nOfTestCase--)
	{
		scanf("%d %d %d", &totalNumber, &localMaximum, &localMinimum);

        solve(localMinimum, localMaximum, totalNumber);
    }
	return 0;
}
