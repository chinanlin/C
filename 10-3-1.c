#include <stdio.h>   /*�W�����o��*/
#include <stdlib.h>  /*�W���֐�*/
#include <time.h>    /*����*/

#define NO  10

void baisu(int *vc1,int *vc2,int *no);

int main(void)
{
	int i,np;
	int arr1[NO]={0};
	int arr2[NO]={0};

	srand(time(0));

	for(i = 0;i < NO;i++)
	{
		arr1[i] =rand()%1000;
	}
	for(i = 0;i < NO;i++)
	{
		printf("arr1[%d] = %d\n",i,arr1[i]);
	}
	while(np <= 0)
	{
		printf("0�ȏ�̐���n����͂��Ă��������F");scanf("%d",&np);
	}
	baisu(arr1,arr2,&np);
	return 0;
}
void baisu(int *vc1,int *vc2,int *no)
{
	int i,counter = 0;
	int banum;
	banum = *no;
	for(i = 0;i < NO;i++)
	{
	 if(*(vc1+(i)) % banum ==0)
	  {
		*(vc2+(counter)) = *(vc1+(i));
		counter++;
	  }
	}
	for(i = 0;i < counter;i++ )
	{
		printf("arr2[%d] = %d\n",i,vc2[i]);
	}
	printf("�i�[���F %d",counter);
}
