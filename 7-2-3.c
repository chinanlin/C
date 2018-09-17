#include <stdio.h>
#include <stdlib.h>

#define NO   10

void arryin(int vc[],int no);

int main(void)
{
	int i;
	int vc[NO] = {0};

	arryin(vc,NO);
        putchar('\n');
	for(i = 0;i < NO;i++)
	{
	 printf("Bc[%d] = %d\n",i,vc[i]);
	}
	return	0;	
}
void arryin(int vc[],int no)
{
   int i;
   puts("”’l‚ð“ü—Í:");
   for(i = 0; i < no ; i++)
   {
     printf("vc[%d] =",i);scanf("%d",&vc[i]);
   }
}