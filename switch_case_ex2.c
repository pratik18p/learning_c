#include<stdio.h>
#include<stdlib.h>

int main(){
	char c;
	int a,b;
	printf("Enter 1st number :");
	scanf("%d",&a);
	
	printf("Enter 2nd number :");
	scanf("%d",&b);
	

	printf("Operator(+,-,*,/):");
	scanf(" %c",&c);
	
	switch(c){
		case '+':printf("Sum = %d",a+b);
		break;
			case '-':printf("Diffrence = %d",a-b);
		break;
			case '*':printf(" Multiplication = %d",a*b);
		break;
			case '/':printf("Division is %d",a/b);
		break;
		default:printf("Invalid Character");
	}
	return 0;
}
