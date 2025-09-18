#include<stdio.h>


void printTable(int num) 

    {     int i;
    for(i=1;i<=10;i++){
	
        printf("%d x %d = %d \n",num,i,num*i);
    }
	}

int main(){
	int a;
	printf("Enter your number");
	scanf("%d",&a);
	  
	  
	  printTable(a);
	return 0;
}
