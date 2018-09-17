#include <stdio.h>

unsigned str_length(const char *s);


int main(void)
{
	char str[101];
	char strc[101];
	int i;
	int count = 0;

	printf("ENTER:");
	scanf("%s",str);

	printf("指定文字：");
	scanf("%s",strc);

    str_length(str);

	for(i = 0;i < str_length(str) ;i++)
	{
		if(str[i]==strc[0])
		{
			count++;
		}
	}
	printf("指定文字%cの個数は%d個",strc[0],count);


	return 0;
}
unsigned str_length(const char *s)
{
    int len = 0;
    while(*s++)
        len++;
     return len;
}
