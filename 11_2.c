#include <stdio.h>
#define NUM 5
#define NAME_NUM 64


struct student
{
    int number;
    char name[NAME_NUM];
    double kokugo;
    double math;
    double rika;
};

void sort(struct student std[],int num);
void swap_point(struct student *x, struct student *y);

int main(void)
{
    int i;

    struct student std[5] = {
      {101,"Mutsuki",75.1,80.4,70.0},
      {102,"Kisaragi",85.4,75.4,90.4},
      {103,"Yayoi",82.5,98.0,100.0},
      {104,"Uzuki",98.0,80.0,0.0},
      {105,"Satsuki",92.8,89.5,75.7}
      };
     printf("番号    名前     国語     数学     理科\n");
     puts("----------------------------------------");
    for(i = 0 ; i < NUM ; i++)
      {
	printf("%d    %-8s%6.1f%9.1f%9.1f\n",std[i].number,std[i].name,std[i].kokugo,std[i].math,std[i].rika);
      }
      sort(std,NUM);
     printf("数学で並べ変えた結果\n");
     printf("番号    名前     国語     数学     理科\n");
     puts("----------------------------------------");
    for(i = 0 ; i < NUM ; i++)
      {
	printf("%d    %-8s%6.1f%9.1f%9.1f\n",std[i].number,std[i].name,std[i].kokugo,std[i].math,std[i].rika);
      }

     return 0;
}
void sort(struct student std[],int num)
{
    int flg = 0;
    int i;
    do
    {
     flg = 0;
     for(i = 0 ; i < num-1 ; i++)
     {
        if(std[i].math < std[i+1].math)
         {
           flg = 1;
           swap_point(&std[i],&std[i+1]);
         }
    }
    }while(flg);
}
void swap_point(struct student *x, struct student *y)
{
    struct student temp = *x;
    *x = *y;
    *y = temp;
}
