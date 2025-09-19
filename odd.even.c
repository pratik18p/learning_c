#include <stdio.h>

int isEven (int n){
   return (n%2==0);
	
}
void main(){
	if(isEven(10)){
		printf("Even \n");
	}else{
		printf("Odd \n");
	}
}
