// demo04_cos.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <math.h>
#include <conio.h>


int main(int argc, _TCHAR* argv[])
{

	double y;
	int x, m;
	for (y = 1; y >= -1; y-=0.1)
	{
		m = acos(y)*10;
		for (x = 1; x < m; x++)
		{
			printf(" ");
		}
		printf("*");

		for(; x < 62-m; x++) //62 = 2*pi*10
		{
			printf(" ");
		}
		printf("*\n");
	}
	getchar();
	return 0;
}

