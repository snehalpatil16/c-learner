/*
**********************************Factorial using function***********************************
#include<stdio.h>
long factorial(int);
int main()
{
int number;
long fact=1;
printf("Enter a number to calculate it's factorial\n");
scanf("%d",&number);
printf("%d!=%ld\n",number,factorial(number));
return 0;
}
long factorial(int n)
{
int c;
long result=1;
for(c=1;c<=n;c++)
result=result*c;
return result;
}

***************************************output**************************************
dell@dell-OptiPlex-7040:~$ gcc mansimore.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter a number to calculate it's factorial
6
6!=720
dell@dell-OptiPlex-7040:~$ 
/*
