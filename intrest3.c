#include<stdio.h>
int main(){
	float principal, rate, time;
	printf("enter you amount:");
	scanf("%f", &principal);
	printf("enter rate percentage:");
	scanf("%f", &rate);
	printf("enter time:");
	scanf("%f",&time);
	
	float intrest = (principal*rate*time)/100;
	printf("intresr: %f", intrest);	
	
}