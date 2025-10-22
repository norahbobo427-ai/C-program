//function to compute fare
/*
Name: Norah Bancy Wambui Gacoki
REG:CT100/G/26156/25
Description:Program to calculate fare
*/

#include<stdio.h>

int main(){
	float distance, fare;
	
	printf("Enter distance(in KM):");
	scanf("%f",&distance);
	
	//function call
    fare = (distance * 50);
	printf("fare = KES.%.2f\n", fare );
	
	return 0;
}
//function defination
float calculatefare(float distance){
	 float fare = distance * 50;
	
	return fare;
}