#include <stdio.h>



int totalPower(int floors){
	
	int power;
	
	if(floors == 1){
		power = 100;
	}
	else if(floors > 1){
		power = (2 * totalPower(floors - 1)) + 100;
		
	}
	
	return power;
	
}
int main(){
	int floors, power;
	
	printf("Enter Floors: ");
	scanf("%d", &floors);
	
	power = totalPower(floors);
	
	printf("Power Consumption is %d KwH", power);
	
	
}
