#include <stdio.h>
#include <stdlib.h>
#define NO  9

int	minof(int vc[],int no);
double	avge(int vc[],int no);

int	main(void)
{
	int vc[NO] = {0};
	int	i;	
	srand(time(0));	
	for(i = 0;i < NO;i++)
	{
		vc[i] =rand()%1000;
	}
	for(i = 0;i < NO;i++)
	{
		printf("  %d",vc[i]);
	}
	putchar('\n');
	printf("Å¬’l‚Í%d\n",minof(vc,NO));
	printf("•½‹Ï’l‚Í%.1f",avge(vc,NO));	
	return	0;	
}
int	minof(int vc[],int no)
{
	int	i;
	int min = vc[0];
	for(i = 1;i < no;i++)
		if(vc[i] < min)
			min = vc[i];
	return min;
}
double	avge(int vc[],int no)
{
	int	i;
	int sum = 0;
	double avge;	
	for(i = 0; i < no;i++)
		sum += vc[i];		
	avge = (double)sum / no;
	return	avge;
}
