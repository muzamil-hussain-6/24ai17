#include<stdio.h>
int main(){
	int a,b;
	char operater;
	printf("Enter your first value:");
	scanf("%d",&a);    
	printf("Enter you second value:");
	scanf("%d",&b);
	printf("Enter your operator (+, -, *, /):");

	scanf(" %c", &operater);
	 
	  
	  if(operater == '+'){
	  	
	
	  printf("result is %d",a + b);
	                                                                            
	  }
	  else if(operater == '-') {
	  
	  	printf("result is %d", a - b);
	  }
	else if (operater == '*') {
	
		printf("result is %d", a * b);
	}
	else if (operater == '/'){
	printf("result is %d", a / b);
}
	else {
		printf("Error: your operator is invalid");
	}
}
	
	
	
	
	
	