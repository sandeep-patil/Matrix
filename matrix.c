
int r[60]={11,12,13,19,20,21,35,36,63,64,83,115,123,125,128,129,130,131,
	   132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,
	   147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,
	   162,163,164,165,166,167,168,169,170,247,251,252} ;
int x;


#include<stdio.h>
#include<conio.h>
#include<time.h>
#include <dos.h>
#include<stdlib.h>
#include<wakeup.cpp>

void dis(int,int,int);
void line(int );
void clear();
void  main()
{
int i,j,a=1,b,l,sw;


clrscr();
 textmode(C80);

   printf("enter");
   scanf("%d",&b);
   delay(300);

 for(i=1;i<=61&&a<2;i++)
   {

for(j=1;j<78;j++)
{

      if(j==1 ||j==30||j==43||j==51||j==71)
      sw=1;
      else if(j==2 ||j==29||j==44||j==60||j==72||j==76)
      sw=2;
      else if(j==3 ||j==18||j==45||j==58||j==64||j==77)
      sw=3;
      else if(j==4 ||j==28||j==42||j==59||j==73)
      sw=4;
      else if(j==5 ||j==17||j==32||j==57||j==75)
      sw=5;
      else if(j==6 ||j==27||j==31||j==46||j==63)
      sw=6;
      else if(j==7 ||j==26||j==41||j==47||j==70)
      sw=7;
      else if(j==8 ||j==16||j==35||j==56||j==65)
      sw=8;
      else if(j==9 ||j==22||j==38||j==48||j==69)
      sw=9;
      else if(j==10 ||j==24||j==33||j==49||j==62)
      sw=10;
      else if(j==11 ||j==21||j==34||j==55||j==66)
      sw=11;
      else if(j==12 ||j==25||j==36||j==50||j==74)
      sw=12;
      else if(j==13 ||j==19||j==39||j==52||j==67)
      sw=13;
      else if(j==14 ||j==20||j==37||j==54||j==61)
      sw=14;
      else if(j==15 ||j==23||j==40||j==53||j==68)
      sw=15;

      if(i==61)
       {
	i=1;
	a++;
       }


switch(sw)
{
case 1 :  dis(j,i,5);
	 break;
case 2 :  dis(j,i-13,16);
	 break;
case 3 :  dis(j,i-9,3);
	break;
case 4 :  dis(j,i-5,8);
	break;
case 5 :  dis(j,i-4,4);
       break;
case 6 :  dis(j,i-14,13);
       break;
case 7 :  dis(j,i-2,6);
       break;
case 8 :  dis(j,i-7,10);
       break;
case 9 :  dis(j,i-5,6);
       break;
case 10 :  dis(j,i-1,4);
       break;
case  11:  dis(j,i-13,9);
       break;
case 12 :  dis(j,i-10,20);
       break;
case  13:  dis(j,i-18,11);
       break;
case 14 :  dis(j,i-5,6);
	   break;
case 15 :  dis(j,i-7,9);
       break;


}

}
delay(100);
}
clear();
delay(500);
neo();

getch();
}


void dis(int x,int i,int l)  //space to be leaved at blank
{ int p,j;
gotoxy(x,i);


if(i<25&&i>1)
{  gotoxy(x,i);

	if(x>=30&&x<40&&i==12)
	{ line(x);
	}
	else
	{
	textattr(10);
	 cprintf("%c",r[random(60)]);
	}
 }
 if(i-1>0&&i-1<25)
 {     gotoxy(x,i-1);
       if(x>=30&&x<40&&i-1==12)
	{ line(x);

	}
	else
	{
       textattr(10);
       cprintf("%c",r[random(60)]);
       }
 }

 p=2;
{ while(i-p>0&&i-p<25&&p<=l)
  { gotoxy(x,i-p);

       if(x>=30&&x<40&&i-p==12)
	{ line(x);
	p++;
	}
	else
	{
	textattr(2);
	cprintf("%c",r[random(60)]);
	p++;
	}
  }
}



 if(i-l>0&&i-l<25)
 {   gotoxy(x,i-l);

     if(x>=30&&x<40&&i-l==12)
	{line(x);
	p++;
	}
	else
	{
	 cprintf(" ");
	}
 }



}


void line(int x)
{   textattr(10);
 if(x==30)
 cprintf("T");
 if(x==31)
 cprintf("H");
 if(x==32)
 cprintf("E");
 if(x==33)
 cprintf(" ");
 if(x==34)
 cprintf("M");
 if(x==35)
 cprintf("A");
 if(x==36)
 cprintf("T");
 if(x==37)
 cprintf("R");
 if(x==38)
 cprintf("I");
 if(x==39)
 cprintf("X");

}


void clear()
{
gotoxy(35,12);
printf(" ");
delay(250);

gotoxy(38,12);
printf(" ");
delay(250);

gotoxy(30,12);
printf(" ");
delay(250);

gotoxy(31,12);
printf(" ");
delay(250);

gotoxy(39,12);
printf(" ");
delay(250);

gotoxy(33,12);
printf(" ");
delay(250);

gotoxy(37,12);
printf(" ");
delay(250);

gotoxy(32,12);
printf(" ");
delay(250);

gotoxy(34,12);
printf(" ");
delay(250);

gotoxy(36,12);
printf(" ");
delay(250);

}