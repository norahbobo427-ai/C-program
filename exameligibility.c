/*
Name:Norah Bancy Wambui
REG:CT100/G/26156/25
Description:Program to test exam eligibility
*/

#include<stdio.h>

int main(){
	
    float attendance,average;
    // prompt the user to enter
    printf("Enter attendance:");
	scanf("%f",&attendance);
	
	printf("Enter average:");
	scanf("%f",&average);
	
	if(attendance>=75/100&& average>=40){
		printf("Eligible for exams.\n");
	}
	else{
		printf("Not eligible\n");
	}
	return 0;
}
