// demo03.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int main(int argc, _TCHAR* argv[])
{
	int i, j, k;
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for (k=1;k<=2*i-1;k++)
		{
			printf("#");
		}
		printf("\n");
	}

	getchar();

	return 0;
}

