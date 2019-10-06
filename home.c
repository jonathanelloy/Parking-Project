#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <string.h>

#include "menu_choice.h"

#define panah_atas 80
#define panah_bawah 72
#define escape 27 
#define enter 13

void Help()
{
	gotoxy(0,34);
	printf("Note:\n");
	printf("1.) Gunakanlah Panah Atas atau Bawah untuk menggerakan Cursor.\n");
	printf("2.) Tekan ENTER untuk memilih menu.\n");
}


void FrontLogo()
{
	system("color 0a");
	char txt[200], c;
	FILE *logo;
	Fullscreen();
	logo = fopen("banner.txt","r");
	c = fgetc(logo);
	while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(logo); 
    } 
  	fclose(logo); 
  	printf("\n");
  	system("pause");
}

void Arrow(int a[])
{
	char panah=62;
	if (a[0]==1)
	{
		gotoxy(69,22);
		printf("%c%c%c",panah,panah,panah);
		gotoxy(69,24);
		printf("%c%c%c",0,0,0);
		gotoxy(69,26);
		printf("%c%c%c",0,0,0);
		gotoxy(69,28);
		printf("%c%c%c",0,0,0);
	}
	else if (a[1]==1)
	{
		gotoxy(69,22);
		printf("%c%c%c",0,0,0);
		gotoxy(69,24);
		printf("%c%c%c",panah,panah,panah);
		gotoxy(69,26);
		printf("%c%c%c",0,0,0);
		gotoxy(69,28);
		printf("%c%c%c",0,0,0);
	}
	else if (a[2]==1)
	{
		gotoxy(69,22);
		printf("%c%c%c",0,0,0);
		gotoxy(69,24);
		printf("%c%c%c",0,0,0);
		gotoxy(69,26);
		printf("%c%c%c",panah,panah,panah);
		gotoxy(69,28);
		printf("%c%c%c",0,0,0);
	}
	else if (a[3]==1)
	{
		gotoxy(69,22);
		printf("%c%c%c",0,0,0);
		gotoxy(69,24);
		printf("%c%c%c",0,0,0);
		gotoxy(69,26);
		printf("%c%c%c",0,0,0);
		gotoxy(69,28);
		printf("%c%c%c",panah,panah,panah);
	}
	gotoxy(0,37);
}

void Menu()
{
	char inp;
	int i=0,func_arr[4];
	memset(func_arr,0,sizeof(func_arr));
	func_arr[i]=1;
	gotoxy(73,22);
	printf("Masuk Parkir");
	gotoxy(73,24);
	printf("Keluar Parkir");
	gotoxy(73,26);
	printf("Jumlah Parkir Tersedia");
	gotoxy(73,28);
	printf("Keluar Aplikasi");
	Arrow(func_arr);
	Help();
	gotoxy(0,37);
	inp = getch();
	while(inp!=enter)
	{
		gotoxy(0,0);
		if(inp==panah_atas)
		{
			i+=1;
			if(i==4)
			{i=0;}
			memset(func_arr,0,sizeof(func_arr));
			func_arr[i]=1;
			Arrow(func_arr);
		}
		else if(inp==panah_bawah)
		{
			i-=1;
			if(i==-1)
			{i=3;}
			memset(func_arr,0,sizeof(func_arr));
			func_arr[i]=1;
			Arrow(func_arr);
		}
		inp = getch();
	}
	gotoxy(0,50);
	/*if(func_arr[0]==1)
	{MasukParkir();}
	else if(func_arr[1]==1)
	{KeluarParkir();}
	else if(func_arr[2]==1)
	{JumlahParkirTersedia();}
	else*/
	if(func_arr[3]==1)
	{Keluar();}
}

void HomeLogo()
{
	char txt2[200], c2;
	FILE *logo2;
	logo2 = fopen("banner2.txt","r");
	c2 = fgetc(logo2);
	while (c2 != EOF) 
    { 
        printf ("%c", c2); 
        c2 = fgetc(logo2); 
    } 
  	fclose(logo2);
}



