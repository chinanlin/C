#include <stdio.h>

int main(void)
{
	char str[101];
	int len = 0;
	int i;
	
	printf("ENTER:");
	scanf("%s",str);

	while(str[len])
	{
		len++;
	}
	printf("‹t:");
	for(i = len-1; i >= 0; i--)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	
	return 0;
}
