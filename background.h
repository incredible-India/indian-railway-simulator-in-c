#define ENTER 13
#define TAB 9
#define BKSP 8
#define ESC 27
#include<stdlib.h>
void gotoxy(int,int);
void background(void);
void id(void);
void cpy(char []);
void password(void);
void choice(char);
void cpya(char []);


void background(void)
{
extern int i,j;
SetConsoleTitle("WELCOME IN INDIAN RAIWAYS");
system("color 06");
gotoxy(40,3);

for(i=0;i<1;i++)
{

    for(j=20;j<=40;j++)
    {

     system("cls");
      gotoxy(j,12);
      system("color 05");
      printf("-------<<<<<<<WELCOME TO INDIAN RAILWAYS>>>>------");
system("color 06");
system("color 01");


    }

}





}
int i,j;
void option(void)
{

   char x9;
   ti();
    SetConsoleTitle("SELECTION");
  system("color 01");
 system("cls");

   gotoxy(40,05);
 printf("1: CHECK THE PNR STATUS...");
  gotoxy(40,8);
 printf("2: TRAIN QUARIES....");
   gotoxy(40,11);
 printf("3:BOOK E-TICKET ");
 gotoxy(40,14);
 printf("4: GET HELP");
 gotoxy(40,17);
 printf("5: EXIT");


gotoxy(40,21);
printf("YOUR CHOICE ::\t");
fflush(stdin);
x9=getche();
choice(x9);


}
void id(void)
{
   char  mob[30];
   SetConsoleTitle("TAKING INFORMATION..");
  x2:
     system("color 06");  system("cls");
   printf("ENETR YOUR 10 DIGIT MOBILE NO....\n");
gets(mob);
   if(strlen(mob)!=10)
   {
   system("color 0c");
       printf("\n\aOOOOPPSS INVALID MOBILE NO...TRY AGAIN\n");
         printf(" (\nYOU ENTERED  %d DIGIT NO.\n) ",strlen(mob));
         {
            char x1;   x3:
             printf("\n \nPRESS \"ENTER\" FOR TRY AGAIN \n\nPRESS \"ESC\"TO EXIT\n");
          x1=getche();
             if(x1==ESC)
                exit(0);
             else if (x1==ENTER)
                goto x2;
                else

                {  printf("\a OOPSSS YOU ENTERD WRONG KEY\n");
                    goto x3;

                }

         }
   }
cpy(mob);


}

void cpy(char ch[])
{


    FILE *P;
    P=fopen("information.dat","w");
    fprintf(P,"\n");
    fprintf(P,"\n");
   fputs(ch,P);
   fclose(P);
 {

 }



}
void password(void)
{

    int x4=0;
    char v,pwd[100];
    printf("\nENTER THE NEW PASSWORD ....HIT \"ENTER\" TO CONFIRM\n");
    printf("\nPassword....\t");
    while(1)
    {

       v= getch();

        if(v==ENTER|| v==TAB)
        {
         pwd[x4]='\0';
         break;

        }else if(v==BKSP)
        {
            if(x4>0)
            {
                x4--;
                printf("\b  \b");
            }
        }else{
        pwd[x4++]=v;
        printf("* \b");
        }
       cpya(pwd);

    }






}
void cpya(char h[])
{
  int w;

    FILE *q;
    q=fopen("information.dat","a");
    if(q==NULL)
    {
        printf("file not found\n");
    }
    fprintf(q,"\n");
    fprintf(q,"\n");
   fputs(h,q);

     fclose(q);


 }


