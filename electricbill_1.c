/*
Name:Norah Bancy Wambui Gachoki
REG:CT100/G/26156/25
Description:Program to calculate elecricbill
*/

#include<stdio.h>
float calculateelectricbill(int units);

int main(){
	int units;
	float totalbill;
	
	printf("Enter units : ");
	scanf("%d", &units);

	totalbill = calculateelectricbill(units);
	printf("Total bill:.%.2f\n",totalbill);
	
	return 0;
}
float calculateelectricbill(int units){
	float totalbill;
	
	if(units<=100){
		totalbill = units * 10;
	}
	
	else if(units <= 200){
		totalbill = ((units -100) * 15);
	}
	else{
		totalbill =(100 * 10)+(100 * 15)+((units-200) * 20);
	}
	
	return totalbill;
}
