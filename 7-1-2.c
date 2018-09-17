#include <stdio.h>

int cross(int a, int b ,int c)
{
	return a * b * c;
}

int main(void)
{
	int na,nb,nc;

	printf("ENTER 1 :");scanf("%d",&na);
	printf("ENTER 2 :");scanf("%d",&nb);
	printf("ENTER 3 :");scanf("%d",&nc);
	printf("ENTER1 X ENTER2 X ENTER3 = %d",cross(na,nb,nc));
}
