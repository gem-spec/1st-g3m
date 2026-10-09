/*Bank ATM widthrawal
Author Gemenet 
registration  BCS-05-0533/2026
*/

#include<stdio.h> 

int main(){
	double balance, amount;
	
	printf("Enter your initial balance: ");
	if(scanf("%lf", &balance) !=1 || balance <=0){
		printf("Invalid balance.It must be greater than 0 \n");
		return 1;
	}
	//keep allowing widthrawals while balance >0
	
	while(balance >0){
		printf("Enter your current balance: %lf\n",balance);
		printf("Enter the amount to widthraw: ");
		
		if(scanf("%lf", &amount) !=1){
			printf("Invalid input.Exiting.\n");
		return 1;	
		}
		
		if(amount<=0){
			printf("Please enter an amount greater than 0.\n");
			continue;
		}
		balance=balance-amount;
		printf("Balance after widthrawal: %lf\n",balance);
	}
	if(balance==0){
	printf("\n Your balance is now 0 no more widthrawals allowed\n");	
	}
	else{
		printf("\n Your balance is now negative(%.2lf).No more widthrawals allowed\n",balance);
		
	}
	
return 0;	
}

