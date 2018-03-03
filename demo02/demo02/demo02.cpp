// demo02.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main(int argc, _TCHAR* argv[])
{
	int i, j, k;
	for (i=0;i<=10;i++)
	{
		for(j=0;j<=5; j++)
		{
			for(k=0;k<=2;k++)
			{
				if (i+j*2+k*5 == 10)
				{
					printf("壹角%d个，贰角%d个，伍角%d个\n", i,j,k);
				}
			}
		}
	}

	getchar();

	return 0;
}

