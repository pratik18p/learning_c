#include<stdio.h>

int main(){
	int x = 12; int y=15;
	printf("x & y = %d \n" , x & y);  // bitwise AND
	printf("x | y = %d \n" , x| y); //  bitwise OR
	printf("x ^ y = %d \n", x ^ y); //XOR
	printf("complement = %d \n", ~ x); //Use tilt symbol
	return 0;
}
