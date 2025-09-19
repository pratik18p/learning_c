

#include<stdio.h>
#define PI 3.1416

float areaofCircle(){
	float a,r=5;
	a=PI*r*r;
	return a;
}
int cube(){
	int cube,num=7;
	cube=num*num*num;
	return cube;
}
int squareroot(){
	int i, num=25;
	for(i=1;i*i<=num;i++){


}	return i-1;
}
int main(){
	printf(" \n squareroot %d",squareroot());
	printf("\n  area of cube %d",cube());
	printf("\n area of circle %.2f",areaofCircle());
	return 0;
}
