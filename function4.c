#include<stdio.h>

void areaRect(int length ,int width){
	printf("Area = %d \n",length * width);
	
}

int main (){
	int l,w;
	
	printf("Enter length ");
	scanf("%d",&l);
	
	printf("Enter Width ");
	scanf("%d",&w);
	
	areaRect(l,w);
	
	return 0;
}
