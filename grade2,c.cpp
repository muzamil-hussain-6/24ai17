#include<stdio.h>
int main (){
	int english, sindhi, urdu;
	
	printf("your english marks:  ");
	scanf("%d",&english);
	printf("your sindhi marks:  ");
	scanf("%d",&sindhi);
	printf("your urdu marks:  ");
	scanf("%d",&urdu);

	float average = (english + sindhi  +urdu)/3;
	printf("average: %f",average);
	if (average >=90){
		printf("\n Grade:  A+ very excellent");
		
	}

		else if(average >=80){
			printf("\n Grade:  A excellent ");
		}
		

		else if(average >=70){
			printf("\n Grade:  B excellent ");
		}
		
		
		else if(average <70){
			printf("\n fail work hard ");
		}

}