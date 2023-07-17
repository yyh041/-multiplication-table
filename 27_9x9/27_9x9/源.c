#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int fir= 1;
	int sec= 1;
	for (sec = 1; sec <=fir; sec++)
	{
		for (fir = 1; fir <=9; fir++)
		{
			if (sec == 10 || sec<fir)
			{
				break;
			}
			printf("%d*%d=%-2d ", fir, sec, fir * sec);
		};
		printf("\n");
	};
	return 0;
}