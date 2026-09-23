/*
Author Tracey
Admission number BCS-05-0533/2026
*/

#include<stdio.h>

#define simple interest

int main(){

    float principleamount;
    float time;
    float rate;
    float simpleinterest;

    printf("Enter the principleamount. \t");
    scanf("%f", &principleamount);
    
    printf("Enter the time. \t");
    scanf("%f", &time);
    
    printf("Enter the rate. \t");
    scanf("%f", &rate);
    
    simpleinterest= (principleamount*time*rate)/100;
    
    printf("The simpleinterest is %.2f \n",simpleinterest);
    
    return 0;
}
    
    
