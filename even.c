#include<stdio.h>
int main(){
	int number;
	printf("Enter your number:");
	scanf("%d",&number);
	
	if(number %2 == 0) {
		printf("your number is even \n ", number );
	}
	else {
		printf("your number is odd \n", number);
}
}