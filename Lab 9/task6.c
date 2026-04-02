#include <stdio.h>

float totalRevenue(float bill[], int size){
	float sum = 0;
	
	for(int i = 0; i < size; i++){
		sum = sum + bill[i];
	}
	return sum;
}

int bestTable(float bill[], int size){
	int i, highTable = 0;
	float highest = 0;
	
	for(i = 0; i < size; i++){
		if(bill[i] > highest){
			highest = bill[i];
			highTable = i+1;
		}
	}
	return highTable;
}

int isProfitable(float totalRev){
	if(totalRev > 10000){
		return 1;
	}else{
		return 0;
	}
}


int main(){
	
	int size, i;
	
	printf("Enter Number of Tables: ");
	scanf("%d", &size);
	
	float bill[size];
	
	for(i = 0; i < size; i++){
		printf("Enter Total for Table %d: \n", i+1);
		scanf("%f", &bill[i]);	
	}
	
	float total = totalRevenue(bill, size);
	int best = bestTable(bill, size);
	int profitable = isProfitable( total);
	
	printf("Revenue Summary: \n");
	printf("Total Revenue: %0.2f\n", total);
	printf("Best Table: %d\n", best);
	printf("Profitable Day (1 Means Yes, 0 Means No): %d \n", profitable);
	
	
}
