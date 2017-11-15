/*
************************************************volume of cylinder******************************
#include<stdio.h>
void main()
{
float vol,pie=3.14;
float r,h;
printf("ENTER THE VALUE OF RADIOUS:-");
scanf("%f",&r);
printf("ENTER THE VALUE OF HEIGHT:-");
scanf("%f",&h);

vol=pie*r*r*h;
printf("VOLUME OF CYLINDER IS:-%3.2f",vol);
}
**************************************************output*****************************************
dell@dell-OptiPlex-7040:~$ gcc manasism.c
dell@dell-OptiPlex-7040:~$ ./a.out
ENTER THE VALUE OF RADIOUS:-11
ENTER THE VALUE OF HEIGHT:-26
VOLUME OF CYLINDER IS:-9878.44dell@dell-OptiPlex-7040:~$ 
/*

