// demo02.cpp : �������̨Ӧ�ó������ڵ㡣
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
					printf("Ҽ��%d��������%d�������%d��\n", i,j,k);
				}
			}
		}
	}

	getchar();

	return 0;
}

