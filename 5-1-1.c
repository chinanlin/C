#include <stdio.h>

int main(void)
{
	char vx;
	char vy;
	char vc[5];

	printf("vx�̃A�h���X�F%p �T�C�Y�F%d byte\n",&vx, sizeof(vx));
	printf("vy�̃A�h���X�F%p �T�C�Y�F%d byte\n",&vy, sizeof(vy));
	printf("vc[0]�̃A�h���X�F%p �T�C�Y�F%d byte\n",&vc[0], sizeof(vc[0]));
	printf("vc[1]�̃A�h���X�F%p �T�C�Y�F%d byte\n",&vc[1], sizeof(vc[1]));
	printf("vc[2]�̃A�h���X�F%p �T�C�Y�F%d byte\n",&vc[2], sizeof(vc[2]));
	printf("vc[3]�̃A�h���X�F%p �T�C�Y�F%d byte\n",&vc[3], sizeof(vc[3]));
	printf("vc[4]�̃A�h���X�F%p �T�C�Y�F%d byte\n",&vc[4], sizeof(vc[4]));

	printf("vc�̃A�h���X�F%p �T�C�Y�F%d byte\n",&vc, sizeof(vc));

	return (0);

}
