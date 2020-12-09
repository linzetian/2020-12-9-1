//通过循环打印菱形（空格+*）
#include<stdio.h>
int main()
{
	int i = 0;
	int line = 0;
	scanf("%d",&line);
	for (i = 0; i < line; i++)
	{
		//上半部分
		int j = 0;
		for (j = 0; j <line-1-i ; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line-1; i++)
	{
		//下半部分
		int j = 0;
		for (j = 0; j <i+1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < line+1-2*i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}