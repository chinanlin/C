#include <stdio.h>

int	px(int x);

int main(void)
{
  int i;
  int x = 1;  
  for(i = 0;i < 5;i++)
  printf("%d ^ 2 = %d \n", i + 1,px(x++));
    return 0;
}
int	px(int x)
{
	return (x*x);
}
