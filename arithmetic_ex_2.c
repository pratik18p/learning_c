#include<stdio.h>

int main(){
	int appleQty,oilQty,milkQty;
	int applePrice,oilPrice,milkPrice;
	int total;
	int paid;
	
	
	applePrice = 50;
	oilPrice = 25;
	milkPrice = 30;
	
	printf("Enter Quantity of apple (kg)");
	scanf("%d",&appleQty);
	
	printf("Enter Quantity of oil (ltr)");
	scanf("%d",&oilQty);
	
	printf("Enter Quantity of Milk (leter)");
	scanf("%d",&milkQty);
	
	total = (appleQty * applePrice) + (oilQty * oilPrice) + (milkQty * milkPrice);
	printf("Total bill amount : %d  \n", total);
	
	printf("Enter amount paid by customer?");
	scanf("%d",&paid);
	
	printf("change to return = %d \n", paid - total);
	
	
	return 0;
}
