#include<stdio.h>
#include<conio.h>
int hcf(int a,int h)
{
int temp;
while(1)
{
temp=a%h;
if(temp==0)
return h;
a=h;
h=temp;
}
}
int main()
{
int c,d,e;
printf("Enter two values to find gcd\n");
scanf("%d%d",&c,&d);
e=hcf(c,d);
printf("\ngcd of %d and %d id %d.",c,d,e);
getch();
}
