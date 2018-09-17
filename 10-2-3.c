#include <stdio.h>

void full_adder(int a, int b,int x,int *fs, int *fc);

int main(void)
{
	int input_a,input_b,input_x;
	int s,c;
	
	puts("Input");
	
	printf("A = ");scanf("%d",&input_a);
	printf("B = ");scanf("%d",&input_b);
	printf("X = ");scanf("%d",&input_x);
	
	full_adder(input_a,input_b,input_x,&s,&c);
	
	puts("Output");
	
	printf("S =%2d\n",s);
	printf("C =%2d\n",c);
	
	return 0;
}
void full_adder(int a, int b,int x,int *fs, int *fc)
{
	 *fs = a ^ b ^ x;
	 *fc = (a && b)||(a && x)||(b && x);
}
