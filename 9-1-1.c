#include <stdio.h>

#define pow(x)	x*x

int main(void)
{
  int i;
  int x = 1;
  
  for(i = 0;i < 5;i++)
   printf("%d ^ 2 = %d \n", i + 1,pow(x++));

  return 0;
}
