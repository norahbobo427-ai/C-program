/*
Name:Norah Bancy Wambui Gachoki
REG:CT100/G/26156/25
Description:Program to convert to celsius

*/

#include<stdio.h>
//function prototype
float converttocelsius(float Fahrenheit);

int main(){
	float temperatureFahrenheit, temperaturecelsius ;
	
	printf("Enter temperature (in Fahrenheit): ");
	scanf("%f",&temperatureFahrenheit);
	//function call
	temperaturecelsius = converttocelsius(temperatureFahrenheit);
	printf("temperature in celsius = .%2f\n",temperaturecelsius);
	return 0;
}

float converttocelsius(float Fahrenheit){
	float temperaturecelsius = (Fahrenheit-32) * 5/9;
	
	return temperaturecelsius;
}