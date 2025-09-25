/*
Name: Norah Bancy Wambui
REG:CT100/G/26156/25
Description: Volume surface area programs
volume=pi*2r*h
surfacearea=2pi*2r*+2pi*r*h
pi=3.142

*/
#include<stdio.h>

#define PI 3.142

int main(){
   float height,radius,volume,surfacearea;
   
   printf("Enter radius of the cylinder: ");
   scanf("%f",&radius);
   
   printf("nEnter height of the cylinder: ");
   scanf("%f",&height);
   
  volume = PI * radius * radius * height;
   surfacearea = 2 * PI * radius*radius + 2 * PI * radius * height;
   
   printf("volume of the cylinder=%.2f\n",volume);
   printf("surfacearea of the cylinder=%.2f\n",surfacearea);
   
   
	return 0;
}