#include<stdio.h>
#include<stdlib.h>

int main (){
	int Restaurent_open,Food_Ready,Payment;
	
	printf("Is Restaurent Open? (1 = yes,0=no)");
	scanf("%d",Restaurent_open);
	
	if(Restaurent_open==1){
		printf("Is Food Ready? (1 = yes,0=no)");
		scanf("%d",Food_Ready);
		if(Food_Ready==1){
			printf("Payment Done (1 = yes,0=no)");
			scanf("%d",Payment);
			if(Payment==1){
				printf("thank you for your service");
			}else{
				printf("payment first");
			}
		}else{
			printf("please wait for Food");
		}
		
	}else{
		printf("Ab Kaha jaye");
	}
	
	
	
	return 0;
}
