/*
********************************************volume of sphere****************************
#include<stdio.h>
#include<math.h>
void main()
{
float radius,pie,volume;
pie=3.1416;
printf("Enter the radius:");
if(scanf("%f",&radius)==1)
{volume=(4/3)*pie*radius*radius*3;
printf("The volume is:%6.2f",volume);
}
else
{
printf("error,enter correct value");
}
}
*****************************************output***********************************
dell@dell-OptiPlex-7040:~$ gcc MSM.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter the radius:
7
The volume is:461.82dell@dell-OptiPlex-7040:~$ 
/*


