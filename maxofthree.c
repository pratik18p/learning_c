// Max of 3
#include<stdio.h>

int maxofThree(){
	int a = 10,  b=25, c=15;
	
	if(a>b && a>c){
		
		return a;
	}else if(b>c){
		
		return b;
		
	}else {
		return c;
	}
}
	int main(){
	printf("Max of three is = %d \n",maxofThree());
	
	return 0;	
}

