#include <stdio.h>

void half_adder(int a, int b,int *hs, int *hc);

int main(void)
{
	int input_a,input_b;
	int s,c;
	printf("A = ");scanf("%d",&input_a);
	printf("B = ");scanf("%d",&input_b);
	
	half_adder(input_a,input_b,&s,&c);
	
	printf("S =%2d\n",s);
	printf("C =%2d\n",c);
	
	return 0;
}
void half_adder(int a, int b,int *hs, int *hc)
{
	 *hs = a ^ b;
	 *hc = a && b;
}
