#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void graph()
{
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"f:\\tc\\bgi");
//bar(0,0,720,480);

}

void after(float,float,int);


void main()
{
float u;
float s;
int a,b;
float t=0;
FILE *p;
float g=9.8;
float h;
float i;

clrscr();
graph();
p=fopen("HAWK.txt","w");
printf("Enter the valiocity in km/hr=");
scanf("%f",&u);
printf("Enter the height in meter=");
scanf("%f",&i);
printf("Enter the angle n degree=");
scanf("%f",&s);
line(0,405,720,405);
printf("%d",getmaxx());
fprintf(p,"h\tt");
s=s*M_PI/180;
u=u*5/18;

while(1)
{
t=t+0.01;
h=(i)+(tan(-s)*t)-(g*t*t/(2*u*u*cos(-s)*cos(-s)));


a=400-(h*50);
b=(t*32);
//delay(5);
circle(b,a,6);
//printf("\n%f\t%f %f %f",h,t,b,a);
fprintf(p,"\n%f\t%f\t%d\t%d",h,t,a,b);
if(h<=0 || b>=620)
{
if(b<=620)
after(u,i,b);

break;


}

}
getch();
}



void after(float u,float h,int b )
{

float g=9.8;
float s;
double angle;
int a;
int c;
float t=0;
FILE *p;
float new;
p=fopen("HAWK.txt","a");
angle=atan(2*h/u);
new=(u*u)+(h*h);
//s=(float)angle;
u=sqrt(new);
c=b;
line(615,364,615,400);

while(1)
{
t=t+0.01;
h=(tan(angle)*t)-(g*t*t)/(2*u*u*cos(angle)*cos(angle));
a=400-(h*50);
b=(t*32)+c;
//delay(5);
circle(b,a,6);
//printf("\n%f\t%f %f %f",h,t,b,a);
fprintf(p,"\n%f\t%f\t%d\t%d",h,t,a,b);
if(b==615)
{
if(a>=364 && a<=400)
{
outtextxy(300,50,"OUT");
}
else
{
outtextxy(270,50,"NOT OUT");
}
}
if(b>=640)
{
break;
}
}
}