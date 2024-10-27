#include<stdio.h>
int main(){
	
	int leap;
	printf("year: ");
	scanf("%d",&leap);
	
	if( leap %4 == 0){
		
		printf("yes",leap);
	}
	else {
		printf("no");
	}
	
	
	
}