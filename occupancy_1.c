/*
Name:Norah Bancy Wambui Gachoki
Reg:CT100/G/26156/25
Description:3D array
*/
# include<stdio.h>
int main(){
	int branch,floor,room;
	int k,l,m;
	int sum=0;
	int occupancy[3][5][10]={
	{
	{0,1,1,0,1,0,0,1,1,0},
	{1,0,1,1,0,0,0,1,0,0},
	{0,0,0,0,0,1,0,1,0,0},
	{1,1,1,0,0,0,0,0,0,0},
	{1,0,0,1,1,0,1,0,0,1}	
	 },
	 {
	{1,1,1,0,0,0,1,1,0,0},
	{0,0,0,0,0,0,0,1,0,0},
	{1,1,1,0,0,1,1,0,0,1},
	{0,0,0,1,1,1,0,0,1,0},
	{1,1,1,1,1,1,1,1,0,0}
	 },	
	 {
	{0,0,1,1,0,1,1,0,0,1},
	{1,1,1,0,0,0,0,1,1,0},
	{0,0,0,0,1,1,1,1,0,1},
	{1,1,1,1,1,1,0,0,0,1},
	{1,1,1,0,0,0,1,0,1,0}	
	 }
   };
   
	for(k=0;k<3;k++){
		for(l=0;l<5;l++){
			for(m=0;m<10;m++){
				printf("%d\n",occupancy[k][l][m]);
				sum = sum + occupancy[k][l][m];
		
			}
			printf("\n");
		}
		
	}
	

	printf("The sum is %d\n",sum);
	
	return 0;
}