/*
**********************************Volume of cube**************************************
#include<stdio.h>

 void main()
 {
   float a;
  float surface_area,volume;
  
  
 printf("Enter size of any side of a cube :");
 scanf("%f",&a);
 
 surface_area=6*(a*a);
 volume=a*a*a;
 
 printf("Surface area of cube is:%.3f",surface_area);
 printf("\nVolume of cube is :%.3f",volume);
 }
 **************************************output***************************************
 dell@dell-OptiPlex-7040:~$ gcc manasimore.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter size of any side of a cube :8
Surface area of cube is:384.000
Volume of cube is :512.000dell@dell-OptiPlex-7040:~$ 
/*

