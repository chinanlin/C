#include <stdio.h>


int main(void)
{
	char str[101];
	char strc[101];
	int i,len = 0 ;
	int count = 0;

	printf("ENTER:");
	scanf("%s",str);
	
	printf("�w�蕶���F");
	scanf("%s",strc);

	while(str[len])
	{
		len++;
	}

	for(i = 0;i < len;i++)
	{
		if(str[i]==strc[0])
		{
			count++;
		}
	}
	printf("�w�蕶��%c�̌���%d��",strc[0],count);


	return 0;
}
