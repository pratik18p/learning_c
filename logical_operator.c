#include<stdio.h>
int main (){
	int x,y,z;
	
	printf("Enter X value");
	scanf("%d",&x);
	
	printf("Enter y value");
	scanf("%d",&y);
	
	printf("Enter z value");
	scanf("%d",&z);
	
	
	printf("Logical Operation Result: -");
  	printf("\nAnd result  : %d \n",(x>5 && y<10 && z<15)); //AND
  	printf("OR result  : %d \n",(x>5 || y<10 || z<15)); //OR
  	printf("NOT result  : %d \n",!(x> y<z)); //NOT
	
	
	return 0;
}
