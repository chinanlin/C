#include <stdio.h>

int com(int n);


int main(void)
{
	int cn,cr,c;

	printf(" n = ");scanf("%d",&cn);
	printf(" r = ");scanf("%d",&cr);
	
	if(cn >= 0 && cr >=0)
	{
     		if(cn >= cr)
      		{
		c = com(cn)/(com(cn-cr)*com(cr));
		printf("%d_C_%d = %d",cn,cr,c);
      		}
     		else
      		{
		printf("ERROR");
      		}
   	}
   	else
   	{
		printf("ERROR");
   	}

  return 0;
}

int com(int n)
{
	if(n >0)
	return n*com(n-1);
	else
	return 1;
}
