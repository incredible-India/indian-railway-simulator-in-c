#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include"D:\projects in c\INDIAN RAILWAY\background.h"
#include"choice.h"
#include"filehandling.h"
#include<string.h>
//#include<time.h>
void option(void);

void time (void);
void gotoxy(int ,int);
void gotoxy(int x ,int y)
{

COORD c;
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}
 int main()
{
    int X;
  void (*a)(void);
 a=id;
background();
a();
password();

 option();

getche();
}
