#include <stdio.h>

int main(){
	int price = 0, total = 0, inp = 0;
	
	do{
		printf("Enter Item Price: ");
		scanf("%d", &price);
		total = total + price;
		printf("Do you wish to add more?\n 1. Yes \n 0. No \n");
		scanf("%d", &inp);
		
	}while(inp != 0);
	if(total > 5000){
		total = 0.95*total;
	}
	printf("Yours Final Amount is: %d (After Discount, If Applicable)", total);

}
