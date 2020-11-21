void pnr(void);
void trains(void);
void file5(void);
void file6(void);
 void exiti(void);
 void gthelp(void);
 void mob(void);
 void term(void);
 void tkt(void);
 void etkt(void);
 void etkt2(void);
 void bac(void);

 void choice(char q)
 {
 if(q=='1')
 {
 pnr();
bac();
 }else if(q=='2')
 {

    trains();
    bac();
 }else  if(q=='3')
 {
  {
      void (*l)(void);
      l=tkt;
      l();
      bac();
  }

 }else  if(q=='4')
 {
  gthelp();
  bac();

 }else  if(q=='5')
 {
  exiti();

 }else
{
    printf("\a");
    system("cls");
     option();
}




 }
 void pnr(void)
 {
      char ch[20],kh[100];
    x78:
        SetConsoleTitle("TICKET CONFIRM");
         system("cls");
      gotoxy(30,05);
      printf("ENTER YOUR PNR.....\t");

      fflush(stdin);
      gets(ch);

    if(strlen(ch)==10)
    {
        {
            FILE *z;
            system("color 0b");
            z=fopen("PNR0.txt","r");
            if(z==NULL)
            {
                printf("SORRY SERVER PROBLEM\n");
                exit(0);
            }gotoxy(30,05);
                printf(" YOUR PNR.....");
                printf("\n");


            while(fgets(kh,9,z)!=NULL)
            {
                printf("%s",kh);
            }
            fclose(z);
        }
    }  else
        {      x79:        gotoxy(30,07);
        printf("\a");
            printf("OOOOPPPPSSS YOU ENTERED INVALID PNR\n ");
                                gotoxy(30,9);
           printf("\t    (PLZ ENTER 10 DIGIT PNR)");
               {
                   char v9[2];
                         gotoxy(30,11);
                  printf("      PRESS \"ENTER\" TO CONTINUE ");
                  gotoxy(30,13);
                  printf("         PRESS \"ESC\"TO EXIT");
                  v9[0]=getche();
                  if(v9[0]==ENTER)
                  {
                      goto x78;

                  }else if(v9[0]==ESC)
                  {  system("cls");
                     gotoxy(40,15);
                      printf("THANX FOR VISITING US");
                          getche();
                          exit(0);
                  }else
                  goto x79;

               }

        }

 }
 void trains(void)
 {

     char from[98],tol[96]; x78 :
         SetConsoleTitle("TRAIN LISTS");
      p96:   system("cls");
     gotoxy(10,16);
     printf("FROM: ");
     fflush(stdin);
       gets(from);
         //fflush(stdin);
      gotoxy(70,16);
     printf("TO: ");

        gets(tol);
if(strlen(from)>0&&strlen(tol)>0)
{
    if('a'==from[2]||from[2]=='e'||from[2]=='i'||from[2]=='u'||from[2]=='o')
{system("color 0b");
  file5();}
else

{
    system("color 0b");
    file6();
}
 }else{
   b85:    system("cls"); gotoxy(40,16);
   system("color 0c");
 printf("\"SORRY THERE IS NO DIRECT TRAINS\"");
 {
     char vl;
     gotoxy(40,18);
     printf("PRESS  \"ENTER\" FOR GO BACK\n");
     gotoxy(40,20);
     printf("PRESS \"ESC\" FOR EXIT\n");
     vl=getche();
     if(vl==ENTER)
     {
         goto p96;
     }else if(vl==ESC)
     {  system("cls");  gotoxy(45,16);
     system("color 0a");

         printf("\"THANX FOR GIVING US TIME\"");
         vl=getche();
        exit(0);
     }else{ printf("\a");
     goto b85;}

 }

 }}
 void exiti(void)
 { system("cls");SetConsoleTitle("HIMANSHU SHARMA");
 gotoxy(40,15);
     system("color 04");
     printf(">>>>>>>>THANX FOR VISITING US<<<<<<<<< ");
     {
         char b;
         b=getche();
         exit(0);
     }


 }

void gthelp(void)
{

    int v[2];
    SetConsoleTitle("HIMANSHU SHARMA");
    system("cls");
    system("color 0b");
    gotoxy(40,10);
    printf("1: KNOW YOUR ENTERED MOBILE NO. AND PASSWORD");
    gotoxy(40,14);
    printf("2: TERMS AND CONDITION");
    gotoxy(40,18);
    printf("3: ABOUT THIS APP");
    gotoxy(40,22);
    printf("4: EXIT");
gotoxy(40,25);
printf("YOUR CHOICE::\t");
fflush(stdin);
scanf("%d",&v[0]);
if(v[0]==1)
{     system("cls");
system("color 0b");
    printf("Due To security Issue We Cannot SHOW Your Password Directly \nJust Try To Find It\n");
    mob();
}else if(v[0]==4)
{  system("cls");
    gotoxy(40,17);
    printf("THANX \"NICE TO MEET YOU\"");
    v[1]=getche();
    exit(0);
}else if (v[0]==2)
{
    system("cls");
    system("color 08");

    term();
}else if(v[0]==3)
{
    system("cls");
    system("color 80");
    printf("Hey Thanx For Giving Us Time\n if you want to any update in this application contact us at \"9506891090\"\n");

}else{

  system("cls");
  gthelp();
}




}
void tkt(void)
{

char to[98],form[98];
 system("cls");
    system("color 0F");
    gotoxy(10,16);
    printf(" FROM\t:");
    fflush(stdin);
    gets(to);
    gotoxy(70,16);
    printf(" TO:\t");
    gets(form);

if(strlen(to)>0&&strlen(form)>0)
{
    if(form[2]=='a'||form[2]=='e'||form[2]=='i'||form[2]=='u'||form[2]=='o')
{system("color 0b");
ek1: etkt2();
 {
     char v;
     v=getche();
     if(v==ESC)
     {
         system("cls");
         system("color 0c");
         gotoxy(40,16);
         printf("THANX FOR USING THIS \"APP\"");
         getche();
         exit(0);
     }else if (v==BKSP)
     {
        tkt();
     }
     else if(v==ENTER)
     {
       system("cls");
       system("color 0b");
       {
           int mem,id;
           float age;
           char name[30];
           printf(" ENTER YOUR NAME::\t");
           fflush(stdin);
           gets(name);
           printf("\n");
           printf("\nENTER YOUR AGE::\t");
           scanf("%f",&age);
           printf("\n");mema:
           printf("\nHOW MANY MEMBERS YO ARE::");
           scanf("%d",&mem);
           if(mem>0)

           {classs:
           printf("\n1)1A\t2)2A\n3)3A\t4)SL.\n");
           scanf("%d",&id);
           if(1<=id<=4)
           {
               system("cls");
               gotoxy(40,16);
               printf("WELCOME \"%s\" YOUR TICKET HAS BEEN BOOKED",strupr(name));
               gotoxy(40,18);
               printf("PNR NO. 2584697563");
               getche();
               system("cls");
               gotoxy(40,16);
               printf("HEY, THANX AGAIN GIVE US A CHANCE  ");


           }else {goto classs;}



       }else {printf("\a");goto mema;}
     }
 }else
 {
    goto ek1;
 }}

}else
{
    system("color 0b");
  ek2: etkt();
    {

      char v;
     v=getche();
     if(v==ESC)
     {
         system("cls");
         system("color 0c");
         gotoxy(40,16);
         printf("THANX FOR USING THIS \"APP\"");
         getche();
         exit(0);
     }else if (v==BKSP)
     {
        tkt();
     }
     else if(v==ENTER)
     {
       system("cls");
       system("color 0b");
       {
           int mem,id;
           float age;
           char name[30];
           printf(" ENTER YOUR NAME::\t");
           fflush(stdin);
           gets(name);
           printf("\n");
           printf("\nENTER YOUR AGE::\t");
           scanf("%f",&age);
           printf("\n"); meme:
           printf("\nHOW MANY MEMBERS YO ARE::");
           scanf("%d",&mem);
           if(mem>0)

           {clases:
           printf("\n1)1A\t2)2A\n3)3A\t4)SL.\n");
           scanf("%d",&id);
           if(1<=id<=4)
           {
               system("cls");
               gotoxy(40,16);
               printf("WELCOME \"%s\" YOUR TICKET HAS BEEN BOOKED",strupr(name));
               gotoxy(40,18);
               printf("PNR NO. 2584697563");
               getche();
               system("cls");
               gotoxy(40,16);
               printf("HEY, THANX AGAIN GIVE US A CHANCE  ");


           }else {goto clases;}



       }else {printf("\a");goto meme;}
     }
 }else
 {
     goto ek2;
 }
 }}
 }else{
   b85:    system("cls"); gotoxy(40,16);
   system("color 0c");
 printf("\"SORRY THERE IS NO DIRECT TRAINS\"");
 {
     char vl;
     gotoxy(40,18);
     printf("PRESS  \"ENTER\" FOR GO BACK\n");
     gotoxy(40,20);
     printf("PRESS \"ESC\" FOR EXIT\n");
     vl=getche();
     if(vl==ENTER)
     {
       tkt();
     }else if(vl==ESC)
     {  system("cls");  gotoxy(45,16);
     system("color 0a");

         printf("\"THANX FOR SUPPORTING US\"");
         vl=getche();
        exit(0);
     }else{ printf("\a");
     goto b85;}

 }

 }



}
