#include <stdio.h>   /*•W€“üo—Í*/
#include <stdlib.h>  /*•W€ŠÖ”*/


int main(void)
{
	int i,max,min;
	int vx[10] = {0};
	
	srand(time(0));

	for(i = 0;i < 10;i++)
	{
	   vx[i] =rand() % 10;
		printf("vx'[%d] = %d\n",i,vx[i]);

			if(vx[i] < vx[i+1])
		{
			max = vx[i+1];
			min = vx[i];
			vx[i+1] = min;
			vx[i] = max;
		}
	}

	for(i = 0;i < 10;i++)
	printf("vx[%d] = %d\n",i,vx[i]);

	return 0;
}
