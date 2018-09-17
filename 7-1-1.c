#include <stdio.h>


int min2(int num1,int num2)
{
	int min = 0;
	if(num1 > num2)
	{
	  min = num2;
	}
	else 
	  min = num1;

	return min;
}

int main(void)
{
	int num1,num2;
	
	printf("ENTER 1 :"); scanf("%d",&num1);
	printf("ENTER 2 :"); scanf("%d",&num2);

	printf("MIN = %d",min2(num1,num2));

	return 0;
}
