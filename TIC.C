#include<stdio.h>
 void tic();
 void check();
 void draw();
 int loop;
 char n[]={'0','1','2','3','4','5','6','7','8','9'};
 void main()
 {
   int player,input;
   int a[]={0,0,0,0,0,0,0,0,0,0};
   int i=0;
   char value;
   loop=1;
   player=1;
   tic();
   while(loop==1)
   {
   player=(player%2==0)?2:1;
   value=player==1?'X':'O';
   draw();
   printf("enter input for player %d\n",player);
   scanf("%d",&input);
      if(input<1 || input>9)
	{
	  puts("! INVALID INPUT !");
	  getch();
	  exit(1);
	}
	{
	 int j;
	 for(j=0;j<9;j++)
	 if(a[j]==input)
	  {
	    puts("not allow");
	    scanf("%d",&input);
	  }
	}
   a[i]=input;
   i++;
   n[input]=value;
   tic();
   check();
   if(loop==0)
   {
    printf(" MATHCH WIN : PLAYER %d",player);
    getch();
    exit(1);
   }
   player++;
 }
 }
 void tic()
 {
    clrscr();
     puts("=== TIC TAC TOE ===");
     printf("    |    |    \n");
     printf(" %c  |  %c | %c  \n",n[1],n[2],n[3]);
     printf("    |    |    \n");
     printf("----|----|----\n");
     printf("    |    |    \n");
     printf(" %c  |  %c | %c  \n",n[4],n[5],n[6]);
     printf("    |    |    \n");
     printf("----|----|----\n");
     printf("    |    |    \n");
     printf(" %c  |  %c | %c  \n",n[7],n[8],n[9]);
     printf("    |    |    \n");
  }

  void check()
  {
    if(n[1]==n[2] && n[2]==n[3])
    loop=0;
    if(n[4]==n[5] && n[5]==n[6])
    loop=0;
    if(n[7]==n[8] && n[8]==n[9])
    loop=0;
    if(n[1]==n[4] && n[4]==n[7])
    loop=0;
    if(n[2]==n[5] && n[5]==n[8])
    loop=0;
    if(n[3]==n[6] && n[6]==n[9])
    loop=0;
    if(n[1]==n[5] && n[5]==n[9])
    loop=0;
    if(n[3]==n[5] && n[5]==n[7])
    loop=0;
  }
  void draw()
  {
  int count=0;
  int i;
  for(i=1;i<=9;i++)
  {
   if(n[i]=='X' || n[i]=='O')
   count++;
  }
  if(count==9){
  puts("MATCH DRAW");
  getch();
  exit(1);
  }
  }