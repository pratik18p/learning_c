#include<stdio.h>


void percentage(int a,int b) {
	float percentage = ((b*100)/a);
	printf("obtained percentage=%2f",percentage);
}

  

int main(){
	int total, obtain;
	printf("Enter Total Marks ");
	scanf("%d",&total);
	
		printf(" Enter Marks obtained  ");
	scanf("%d",&obtain);
	  
	  
	  percentage(total,obtain);
	return 0;
}
