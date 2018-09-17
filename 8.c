#include <stdio.h>
#define BITNUM  8
char full_adder_s(int a,int b,int c);
char full_adder_c(int a,int b,int c);

int main(void)
{
  int xi;
  char si_a,si_b,si_x; //input
  char so_s,so_c;      //output
  
  char signal_a[BITNUM] = {0,0,0,0,1,1,1,1};
  char signal_b[BITNUM] = {0,0,1,1,0,0,1,1};
  char signal_x[BITNUM] = {0,1,0,1,0,1,0,1};
  
  for(xi = 0;xi < BITNUM;xi++)
  {
	si_a = signal_a[xi];
	si_b = signal_b[xi];
	si_x = signal_x[xi];
	
	so_s = full_adder_s(si_a,si_b,si_x);
	so_c = full_adder_c(si_a,si_b,si_x);
	
printf("i:%1d  A:%1d  B:%1d  X:%1d  S:%1d@C:%1d\n",xi,si_a,si_b,si_x,so_s,so_c);
  }  
  return 0;
}
char full_adder_s(int a,int b,int c)
{
	char s;
	s = a^b^c;
	return s;
}
char full_adder_c(int a,int b,int c)
{
	char fc;
	fc = (a&b)|(a&c)|(b&c);
	return fc;
}
