#include <stdio.h>

void sort3(int *n1, int *n2, int *n3);

int main(void)
{
	int na,nb,nc;
	puts("�O��������͂��Ă��������B");
	printf("����A:");scanf("%d",&na);
	printf("����B:");scanf("%d",&nb);
	printf("����C:");scanf("%d",&nc);
	puts("�����̒l�������ɕ��ׂ܂����B");
	sort3(&na,&nb,&nc);
	printf("����A:%d\n",na);
	printf("����B:%d\n",nb);
	printf("����C:%d\n",nc);
	
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
