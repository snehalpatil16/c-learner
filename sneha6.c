#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter value of a");
scanf("%d",&a);
printf("enter value of b");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("value of a %d/nvalue of b %d/n",a,b);
}
