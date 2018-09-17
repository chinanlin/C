#include <stdio.h>

int count(int *vc)
{
	int i;
	for(i = *vc; i >= 0;i--)
	{
		printf("%2d\n",i);
	}	
}
int main(void)
{
	int vx,i;

	printf("ENTER = ");scanf("%d",&vx);
	
	count(&vx);
	
    return 0;
}
