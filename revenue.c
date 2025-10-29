/*
Name:Norah Bancy Wambui Gacoki
Reg:CT100/G/26156/25
Description: Program to compute revenue
*/

# include<stdio.h>
	
int main(){
	int z;
	int sum=0;
	int average=sum/7;
	int revenue[7] = {250,300,350,400,450,500,550};
	const char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	
	for(z=0;z<7;z++){
		printf("%s: kes", days[z]);
		printf("%d\n",revenue[z]);
		sum = sum + revenue[z];
		average=sum/7;
	}
	printf("The sum is %d\n",sum);
	printf("The average is %d",average);

	return 0;
}