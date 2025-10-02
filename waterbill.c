/*
Name:Norah Bancy Wambui
Reg:CT100/G/26156/25
Description:Program to compute water bill
*/
#include <stdio.h>

int main(){
int units;
	float bill;
	
	//prompt user to enter water units
	printf("Enter water units consumed:");
	scanf("%d",&units);
	
	// caltuate bill using if-else
	if(units<=30){
    	bill= units * 20;  
	}
 		else if(units<=60){	
    	bill = (30 * 20) + (units - 30)*25;
		}
		else{
			bill=(30 * 20) + (30 * 25) + (units - 60)*30;
		}
		// Display bill with two decimal places
		printf("Total water bill: %.2f KES\n",bill);
			
	return 0;
			
}

	


	
	
	
		
	