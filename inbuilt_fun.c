#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int i = -25;
	double x =81.9,y = 2.3, z= 7.8, angle = 0.0;
	
	printf("Squart (%.0f) = %2f",x,sqrt(x));  // square root
	
	printf("\nPower (2,3) = %.0f",pow(2,3)); // power
	
	printf("\nabs(%d) = %d ",i,abs(i));  // absolute
	
	printf("\nceil(%.2f) = %.2f ",y,ceil(y));  //round upword  3
	
		printf("\nfloor(%.2f) = %.2f ",z,floor(z));  // round downword  7
		
		printf("\nsin(0) = %.2f",sin(angle));
			printf("\ncos(0) = %.2f",cos(angle));
				printf("\ntan(0) = %.2f",tan(angle));
	return 0;
	}
