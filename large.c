#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("enter your 1st value:");
	scanf("%d",&num1);
	printf("enter your 2nd value:");
	scanf("%d", &num2);
	printf("enter your 3rd value");
	scanf("%d", &num3);
	if(num1 >=num2 &&num1>=num3)
	{
		printf("lagre number is: %d",num1);
	}
	else if(num2 >= num1 && num2 >= num3)
	{
		printf("large number is: %d",num2);
	}
	else {
	printf("large number is: %d",num3);		
	}

	
	
}