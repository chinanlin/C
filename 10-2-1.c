#include <stdio.h>

void sort3(int *n1, int *n2, int *n3);

int main(void)
{
	int na,nb,nc;
	puts("三つ整数を入力してください。");
	printf("整数A:");scanf("%d",&na);
	printf("整数B:");scanf("%d",&nb);
	printf("整数C:");scanf("%d",&nc);
	puts("これらの値を昇順に並べました。");
	sort3(&na,&nb,&nc);
	printf("整数A:%d\n",na);
	printf("整数B:%d\n",nb);
	printf("整数C:%d\n",nc);
	
	return 0;
}
void sort3(int *n1, int *n2, int *n3)
{
	int min =0;

		if(*n1 > *n2)
		{
		min = *n2;
		*n2 = *n1;
		*n1 = min;
		}
        	if(*n2 > *n3)
		{
		min = *n3;
		*n3 = *n2;
		*n2 = min;
		}
		if(*n1 > *n2)
		{
		min = *n2;
		*n2 = *n1;
		*n1 = min;
		}

}
