/*
Name :Norah Bancy Wambui Gacoki
Reg: CT100/G/26156/25
Description:Age& salary program
*/

#include<stdio.h>

int main(){
    int age;
    float salary;
    
    printf("Enter age: ");
    scanf("%d",&age);
    
    printf("Enter salary: ");
    scanf("%f",&salary);
    
    if(age >= 21 & salary >= 21000)
    
    printf("congratulations you qualify for a loan");
    printf("unfortunately we are unable to offer you a loan at this time");
    
	
	return 0;
}