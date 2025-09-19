#include<stdio.h>

float getAverage(int a,int b,int c){
	
	return a+b+c/3;
}
void main(){
	int x,y,z;
	printf("Enter Three Numbers:");
	scanf("%d %d %d ",&x,&y,&z);
	
	printf("Average=%d",getAverage(x,y,z));
}
