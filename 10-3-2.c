#include <stdio.h>
#define NUM 100
#define CON 101

void sigma(int *va);

int main(void)
{
	int i;
	int vc[NUM] = {0};
	
	sigma(vc);

	for(i = 0 ; i < CON ; i++)
	{
		
		printf("%4d\t",vc[i]);
	}
	return 0;
}
void sigma(int *va)
{
	int i;
	int p = 1;
	*(va+(0)) = 0;
	for(i = 0 ; i < CON ; i++)
	{
		*(va+(i+1)) = (p)+*(va+(i));
		p++;
	}
}
