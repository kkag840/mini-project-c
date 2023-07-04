#include<stdio.h>
void main()
{
unsigned long t2000=100;
unsigned long t500=100;
unsigned long t200=100;
unsigned long t100=100;
unsigned long tamt,amt;
unsigned int rs2000,rs500,rs200,rs100;
char a,b,c,d;
    clrscr();
     puts("enter password");
     scanf("%c%c%c%c",&a,&b,&c,&d);
     if(!(a=='k'&&b=='k'&&c=='a'&&d=='g'))
     {
	puts("worng password please try again");
	getch();
	exit(1);
     }
     clrscr();
     puts("enter amount");
     scanf("%ld",&amt);
     if(amt%100!=0)
     {
	 puts("not suffisiant fonud");
	 getch();
	 exit(1);
     }
     tamt=t2000*2000+t500*500+t200*200+t100*100;
     if(amt>tamt)
     {
	 puts("not suffisiant fonud");
	 getch();
	 exit(1);
     }
     rs2000=amt/2000;
     if(rs2000>t2000)
     rs2000=t2000;
     amt-=rs2000*2000;
     t2000-=rs2000;
     rs500=amt/500;
     if(rs500>t500)
     rs500=t500;
     amt-=rs500*500;
     t500-=rs500;
     rs200=amt/200;
     if(rs200>t200)
     rs200=t200;
     amt-=rs200*200;
     t200-=rs200;
     rs100=amt/100;
     if(rs100>t100)
     rs100=t100;
     amt-=rs100*100;
     t100-=rs100;
     printf("2000 x %d\n",rs2000);
     printf("500  x %d\n",rs500);
     printf("200  x %d\n",rs200);
     printf("100  x %d\n",rs100);
     getch();
}