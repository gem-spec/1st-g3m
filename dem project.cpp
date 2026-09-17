#include <stdio.h>

int main(){
	float height;
	double BankBalance;
	char PhoneNumber [15];
	
	printf("Enter details.\n");
	
	printf("Enter your height(in metres/centimetres).\t");
	scanf("%f",&height);
	
	printf("Enter your BankBalance(in Kshs).\t");
	scanf("%lf",&BankBalance);
	
	printf("Enter your PhoneNumber.\t");
	scanf("%s",&PhoneNumber);
	
	printf("\n......Your details.......\n");
	printf("Height: %.2f (m/cm)\n",height);
	printf("BankBalance: %.2f Kshs.\n",BankBalance);
	printf("PhoneNumber: %14s.\n",PhoneNumber);
	
	return 0;
}