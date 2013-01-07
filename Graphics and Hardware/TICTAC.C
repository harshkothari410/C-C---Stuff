#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>


union REGS in,out;


void main();
void help();
void mouse()
{

in.x.ax=1;
int86(0x33,&in,&out);
}

void tictac()
{


int x,y;
int gdriver=DETECT,gmode,errorcode;

initgraph(&gdriver,&gmode,"f:\\tc\\bgi");
setbkcolor(0x01);
x=getmaxx()/2+1;
y=getmaxy()/2+1;
//setcolor(2);
settextstyle(4,0,6);
outtextxy(200,10,"TIC-TAC");
rectangle(220,120,420,340);
settextstyle(0,0,2);
outtextxy(240,125,"GAME FIELD");
setfillstyle(1,4);

line(220,145,420,145);
line(x-30,y-90,x-30,y+90);
line(x+30,y-90,x+30,y+90);
line(x-90,y-30,x+90,y-30);
line(x-90,y+30,x+90,y+30);


rectangle(30,170,170,310);
rectangle(30,130,170,170);
settextstyle(0,0,1);
outtextxy(40,140,"Only click here");
outtextxy(70,155,"to play");
line(x-240,y-60,x-240,y+60);
line(x-200,y-60,x-200,y+60);
line(x-280,y-20,x-160,y-20);
line(x-280,y+20,x-160,y+20);

setfillstyle(1,4);
setfillstyle(1,4);
bar(200,80,260,105);
outtextxy(215,90,"PLAY");
bar(380,80,440,105);
outtextxy(395,90,"HELP");

}

void detect()
{
char ch;
int i=0;
int a=0,s=0,d=0,f=0,g=0,h=0,j=0,k=0,l=0;
int q=0,w=0,e=0,r=0,t=0,y=0,u=0,o=0,p=0;
int z=0,c=0;
settextstyle(1,0,2);
//outtextxy(240,90,"Player 1's Turn");
while(!kbhit())
{
int x,y;
in.x.ax=3;
int86(0x33,&in,&out);
if(out.x.bx==1)
{

x=out.x.cx;
y=out.x.dx;

//printf("\t%d",i);
//printf("\nx=%d y=%d",x,y);
settextstyle(1,0,2);
setfillstyle(1,0);
if(i%2==0)
{
bar(160,70,500,110);
outtextxy(240,90,"Player 1's Turn");

}
else
{bar(160,70,500,110);
outtextxy(240,90,"Player 2's Turn");  }


if((x>=380 && x<=440) && (y>=80 && y<=105))
{

clrscr();
setbkcolor(0);
setfillstyle(1,0);
bar(0,0,640,480);
bar(380,80,440,105);
setfillstyle(9,4);
bar(0,105,640,410);
setfillstyle(1,6);
bar(280,370,360,396);
settextstyle(0,0,1);
outtextxy(290,380,"Continue");
gotoxy(37,5);
printf("**HELP**");
printf("\n\n\n\n * Welcome to help of TIC-TAC.");
printf("\n\n * Click on PLAY button to start game.");
printf("\n\n * Play in left side of frame.");
printf("\n\n * Click in appropriate place in left frame where you want to place or TIC-TAC.");
printf("\n\n * Kindly dont click on filled places again and remaining blank screen.");
printf("\n\n * To play again click on Play again and for exit click on Exit");
printf("\n\n * Thanx for support and click on Continue and have fun");

i=-2;
}

if((x>=280 && x<=360) && (y>=370 && y<=392))
{tictac();
mouse();
}

settextstyle(1,0,2);
if((x>=40 && x<80) && (y>=180 && y<220))
{
if(i%2==1)
{
circle(260,180,14);
a++;
}
else
{line(250,170,270,190);
line(250,190,270,170);
q++;
}

}

if((x>=80 && x<120) && (y>=180 && y<220))
{
if(i%2==1)
{
circle(320,180,14);
s++;
}
else
{line(310,170,330,190);
line(310,190,330,170);
w++;
}
}

if((x>=120 && x<160) && (y>=180 && y<220))
{
if(i%2==1)
{
circle(380,180,14);
d++;   }
else
{line(370,170,390,190);
line(370,190,390,170);
e++;
}
}

if((x>=40 && x<80) && (y>=220 && y<260))
{
if(i%2==1)
{
circle(260,240,14);
f++;  }
else
{line(250,230,270,250);
line(250,250,270,230);
r++;
}
}

if((x>=80 && x<120) && (y>=220 && y<260))
{
if(i%2==1)
{
circle(320,240,14);
g++; }
else
{line(310,230,330,250);
line(310,250,330,230);
t++;
}
}

if((x>=120 && x<160) && (y>=220 && y<260))
{
if(i%2==1)
{
circle(380,240,14);
h++;}
else
{line(370,230,390,250);
line(370,250,390,230);
c++;
}
}


if((x>=40 && x<80) && (y>=260 && y<300))
{
if(i%2==1)
{
circle(260,300,14);
j++;
}
else
{line(250,290,270,310);
line(250,310,270,290);
u++;
}
}


if((x>=80 && x<120) && (y>=260 && y<300))
{
if(i%2==1)
{
circle(320,300,14);
k++;}
else
{line(310,290,330,310);
line(310,310,330,290);
o++;
}
}


if((x>=120 && x<160) && (y>=260 && y<300))
{
if(i%2==1)
{
circle(380,300,14);
l++;
}
else
{line(370,290,390,310);
line(370,310,390,290);
p++;
}
}








//a s d
//f g h
//j k l

//q w e
//r t y
//u o p

if(a==1 && s==1 && d==1)
{
outtextxy(240,400,"Player 1 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(a==1 && f==1 && j==1)
{
outtextxy(240,400,"Player 1 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}

if(a==1 && g==1 && l==1)

{
outtextxy(240,400,"Player 1 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(g==1 && s==1 && k==1)
{
outtextxy(240,400,"Player 1 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(h==1 && l==1 && d==1)
{
outtextxy(240,400,"Player 1 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(g==1 && j==1 && d==1)
{
outtextxy(240,400,"Player 1 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(f==1 && g==1 && h==1)
{
outtextxy(240,400,"Player 1 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(j==1 && k==1 && l==1)
{
outtextxy(240,400,"Player 1 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}






if(q==1 && w==1 && e==1)
{
outtextxy(240,400,"Player 2 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(q==1 && r==1 && u==1)
{
outtextxy(240,400,"Player 2 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(q==1 && t==1 && p==1)
{
outtextxy(240,400,"Player 2 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(t==1 && w==1 && o==1)
{
outtextxy(240,400,"Player 2 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(c==1 && p==1 && e==1)
{
outtextxy(240,400,"Player 2 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(t==1 && u==1 && e==1)
{
outtextxy(240,400,"Player 2 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(r==1 && t==1 && c==1)
{
outtextxy(240,400,"Player 2 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(u==1 && o==1 && p==1)
{
outtextxy(240,400,"Player 2 win");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
z++;
}
if(z==0)
{
if(i==9)
{outtextxy(260,400,"Game draw");
//outtextxy(120,420,"Press <R> to play again and <E> to exit");
outtextxy(380,440,"Made by=Harsh Kothari");

setfillstyle(1,4);
settextstyle(0,0,1);
bar(60,370,150,396);
outtextxy(66,380,"Play again");
bar(490,370,580,396);
outtextxy(520,380,"Exit");
}
}
if((x>=60 && x<=150) && (y>=370 && y<=396))
{main(); }


if((x>=490 && x<=580) && (y>=370 && y<=396))
exit();
i++;

delay(400);
}

}


}


void main()
{
clrscr();
tictac();
mouse();
detect();
getch();
}


void help()
{

}