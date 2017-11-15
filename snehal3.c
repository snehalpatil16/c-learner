********************************************************Greatest number among three number*********************************************************
#include<stdio.h>
void main()
{
int a,b,c;
printf("enter any three numbers:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("greatest number is:%d",a);
else if(b>c)
printf("greatest number is:%d",b);
else
printf("greatest number is:%d",c);
}
******************************************************************output************************************************************
dell@dell-OptiPlex-7040:~$ gcc manasiG.c
dell@dell-OptiPlex-7040:~$ ./a.out
enter any three numbers:
4 6 10
greatest number is:10dell@dell-OptiPlex-7040:~$ 

