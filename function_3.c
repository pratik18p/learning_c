// function with parameter but no return
#include<stdio.h>

void printSum(int a, int b){
	printf("sum=%d \n",a + b);
}
void printSub(int a, int b){
	printf("sub=%d \n",a - b);
}
void printmul(int a, int b){
	printf("mul=%d \n",a * b);
}
void printdiv(int a, int b){
	printf("div=%d \n",a / b);
}
int main (){
	printSum(45,7);
	printSub(55,8);
	printdiv(888,8);
	printmul(89,5);
	
	return 0;
}
