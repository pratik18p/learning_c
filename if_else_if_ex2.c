#include<stdio.h>

int main(){
	
	int Temp;
	printf("Enter the Temperature :");
	scanf("%d",&Temp);
	
	if (Temp<0){
		printf("Get me Blanket - Cold");
		
	}
		else if (Temp>1 && Temp<10){
		printf("I can handle it - Cold");
		
	}
	else if (Temp>11 && Temp<20){
		printf("moderate");
		
	}
		else if (Temp>21 && Temp<40){
		printf("Turn on the AC - Hot");
		
	}
	else{
		printf("I'm gonna die from the heat'");
	}
	return 0;
}

