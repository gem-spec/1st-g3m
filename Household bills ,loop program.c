#include<stdio.h>

int main(){
	
	int household;
	float units;
	printf("===================\n");
	printf("Electricity Bill per Household\n");
	printf("====================\n");
	
	for(household=1;household<=10;household++){
		
		printf("Enter units consumed for household %d \t",household);
		scanf("%f", &units);
		printf("Bill is ksh %f \n",units*10);

	}
}