#include <stdio.h>
#include <math.h>

double ap(double pin , double pout)
{
	return pout / pin;
}

double gp(double pin , double pout)
{
	return 10 * log10(pout / pin);
}

int main(void)
{
	double pin,pout;
	printf("Pin :");scanf("%lf",&pin);
	printf("Pout :");scanf("%lf",&pout);

	printf("Ap = %f\n",ap(pin,pout));
	printf("Gp = %f[dB]\n",gp(pin,pout));
	
return 0;
}
