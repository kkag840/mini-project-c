#include<stdio.h>
void main()
{
 int h,m,s;
 scanf("%d%d%d",&h,&m,&s);
 clrscr();
 if(h>12|| m>59|| s>59)
 {
   printf("ERROR ! ");
   getch();
   exit(1);
 }
 while(1)
 {
   if(s>59)
   {
     s=0;
     m++;
     if(m>59)
     {
      m=0;
      h++;
      if(h>12)
      {
       h=1;
      }
     }
   }
   else
   s++;
   clrscr();
   printf("%02d:%02d:%02d",h,m,s);
   delay(1000);
   }
}
