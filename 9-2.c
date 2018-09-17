#include <stdio.h>

int com(int n,int r);

int main(void)
{
   int cn,cr,c;

   printf(" n = ");scanf("%d",&cn);
   printf(" r = ");scanf("%d",&cr);
   
   if(cn >= 0 && cr >=0)
   {
     c = com(cn,cr);
     if(cn >= cr)
      {
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
int com(int n,int r)
{
  if(n == r)
   {
	return (1);
   }
    else if(r==0)
       {
	return (1);
       }
     else if(r==1)
        {
	 return (n);
        }
  else
   {
	return (com(n-1,r-1) + com(n-1,r) );
   }
}
