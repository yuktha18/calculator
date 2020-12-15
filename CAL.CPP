#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n;
float a,b;
printf("press 1 for sum\npress 2 for subtract\npress 3 for multiply\npress 4 divide\n");
scanf("%d",&n);
if(n==1)
{
printf("enter two numbers for sum:");
scanf("%f%f",&a,&b);
printf("answer=%.2f",a+b);
}
else if(n==2)
{
printf("enter two numbers for subtract:");
scanf("%f%f",&a,&b);
printf("answer=%.2f",a-b);
}
else if(n==3)
{
printf("enter two numbers for multiply:");
scanf("%f%f",&a,&b);
printf("answer=%.2f",a*b);
}
else if(n==4)
{
printf("enter two number for divide:");
scanf("%f%f",&a,&b);
printf("answer=%.2f",a/b);
}
else{
printf("invalid output:");
}
getch();
}