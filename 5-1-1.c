#include <stdio.h>

int main(void)
{
	char vx;
	char vy;
	char vc[5];

	printf("vxのアドレス：%p サイズ：%d byte\n",&vx, sizeof(vx));
	printf("vyのアドレス：%p サイズ：%d byte\n",&vy, sizeof(vy));
	printf("vc[0]のアドレス：%p サイズ：%d byte\n",&vc[0], sizeof(vc[0]));
	printf("vc[1]のアドレス：%p サイズ：%d byte\n",&vc[1], sizeof(vc[1]));
	printf("vc[2]のアドレス：%p サイズ：%d byte\n",&vc[2], sizeof(vc[2]));
	printf("vc[3]のアドレス：%p サイズ：%d byte\n",&vc[3], sizeof(vc[3]));
	printf("vc[4]のアドレス：%p サイズ：%d byte\n",&vc[4], sizeof(vc[4]));

	printf("vcのアドレス：%p サイズ：%d byte\n",&vc, sizeof(vc));

	return (0);

}
