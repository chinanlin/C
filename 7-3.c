#include <stdio.h>

void print_x(void);

int x = 700;
int main(void)
{
	int i;
	int x = 800;
	
	print_x();
	
	printf("x = %d\n",x);
	for(i = 0; i < 5;i++)
	{
		x = i * 100;
		printf("x = %d\n",x);
	}
	for(i = 0; i < 2;i++)
	{
		printf("x = %d\n",x);
	}

	printf("x = %d\n",x);
	
	return 0;
}

void print_x(void)
{
	printf("x = %d\n",x);
}
