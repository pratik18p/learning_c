#include<stdio.h>
#include<stdlib.h>

int main(){
	int ticket,IdProof,luggage;
	
	printf("Do you have a ticket? (1 =yes ,0 - No)");
	scanf("%d",&ticket);
	
	if(ticket==1){
		printf("Do you Have a Id Proof? (1 = yes , 0 - No)");
		scanf("%d",&IdProof);
		if(IdProof == 1);
		{
			printf("Is your luggage within  14 kg?(1 = yes , 0 - No)");
			scanf("%d",&luggage);
			if(luggage == 1){
				printf("Check in Succesfully");
				
			}
			else{
				printf("Extra Luggage Charges apply");
				
			}
			
		}
	
	}	else{
			printf("Id proof Required");
		}
    
	
}
