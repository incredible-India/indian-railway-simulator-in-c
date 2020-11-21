void file5(void);
void ti (void);
void file5(void)
{
   FILE *p;

char f[20];
   p=fopen("D:\\projects in c\\INDIAN RAILWAY\\t1.txt","r");
if(p==NULL)
    printf("file deleted\n");
while(fgets(f,9,p)!=NULL)
{printf("%s",f);}
fclose(p);

}
void file6(void)
{
   {
   FILE *p;

char f[20];
   p=fopen("D:\\projects in c\\INDIAN RAILWAY\\t2.txt","r");
if(p==NULL)
    printf("file deleted\n");
while(fgets(f,9,p)!=NULL)
{printf("%s",f);}
fclose(p);

}

}
void mob(void)
{



   FILE *p;
   p=fopen("information.dat","r");
   char ch;
   if(p==NULL)
        printf("File Not Found");
   while(ch!=EOF)
   {
       printf("%c",ch);
       ch=fgetc(p);

   }

    fclose(p);
}

void term (void)
{
       FILE *p;
   p=fopen("D:\\projects in c\\INDIAN RAILWAY\\terms.txt","r");
   char ch;
   if(p==NULL)
        printf("File Not Found");
   while(ch!=EOF)
   {
       printf("%c",ch);
       ch=fgetc(p);

   }

    fclose(p);
}
void ti (void)
{

 //   time_t ti;
   // time(&ti);
  //  printf("%s",ctime(&ti));
    SYSTEMTIME t;
   GetSystemTime(&t);
   gotoxy(99,01);
    printf("%d\\%d\\%d",t.wDay,t.wMonth,t.wYear);
  //  gotoxy(80,04);
   // printf("%d:%d",t.wHour,t.wMinute);



}
void etkt(void)
{

  FILE *p;
   p=fopen("ebook.txt","r");
   char ch;
   if(p==NULL)
        printf("File Not Found");
   while(ch!=EOF)
   {
       printf("%c",ch);
       ch=fgetc(p);

   }

    fclose(p);
}
void etkt2(void)
{

  FILE *p;
   p=fopen("e2book.txt","r");
   char ch;
   if(p==NULL)
        printf("File Not Found");
   while(ch!=EOF)
   {
       printf("%c",ch);
       ch=fgetc(p);

   }

    fclose(p);
}

void bac(void)
{
    char v;
    gotoxy(80,03);
    printf("PRESS \"ESC\" TO GO BACK ");
    v=getch();
    if(v==ESC)
    {
    option();
    }else
    bac();

}



