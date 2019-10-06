#include <stdio.h>
#include <time.h>
#include <windows.h>

void Keluar()
{
	FILE *last;
	char x;
	system("cls");
	last = fopen("banner3.txt","r");
	x = fgetc(last);
	while(x!=EOF)
	{
		printf("%c",x);
		x=fgetc(last);
	}
}
