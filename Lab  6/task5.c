#include <stdio.h>

int main(){
	int temp, sum = 0, avg = 0, count = 0;
	printf("Enter temperature: ");
	scanf("%d", &temp);
	while(temp != -999){
		sum = sum + temp;
		count = count + 1;
		printf("Enter temperature: ");
	    scanf("%d", &temp);
		
	}avg = sum / count;
	printf("Avg Temperature is: %d", avg);
}
