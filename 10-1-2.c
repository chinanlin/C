#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int change(int *px, int *py)
{
	int address = *px;
	*px = *py;
	*py = address;
}

int main(void)
{
	int vx =0;	
	int vy =0;
	srand(time(0));

	vx =rand()%1000;
	vy =rand()%1000;
	printf("vx =%2d\n",vx);
	printf("vy =%2d\n",vy);
	
	change(&vx,&vy);
	
	printf("vx =%2d\n",vx);
	printf("vy =%2d\n",vy);
	
	return 0;
	
}
