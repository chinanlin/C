#include <stdio.h>
#include <stdlib.h>

#define NO   10

void arryin(int vc[],int no);
void bsort(int vc[],int no);

int	main(void)
{

	int	i;
	int vc[NO] = {0};

	arryin(vc,NO);

	putchar('\n');

	bsort(vc,NO);
	for(i = 0;i < NO;i++)
	{
		printf("Bvc[%d] = %d\n",i,vc[i]);
	}
	return	0;	
}
void arryin(int vc[],int no)
{
   int i;
   puts("”’l‚ð“ü—Í:");
   for(i = 0; i < no ; i++)
   {
	
	printf("vc[%d] =",i);scanf("%d",&vc[i]);
   }
}
void bsort(int vc[],int no)
{
	int i,flg;
	int min;
	do
	{
		flg = 0;
		for(i = 0; i < no-1; i++)
		{
			if(vc[i] < vc[i+1])
			{
				min = vc[i];
				vc[i] = vc[i+1];
				vc[i+1] = min;	
				flg =1;			
			}
		}	
	}while(flg);	
}
