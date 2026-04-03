#include <stdio.h>


int main(){
	int vibrations = 874;
	float temperature = 73.6;
	char status = 'W';
	
	void* sensor;
	
	sensor = &vibrations;
	
	printf("Vibrations: %d\n", *(int*)sensor);
	printf("Address: %p\n", (void*)sensor);
	
	sensor = &temperature;
	
	printf("Temperature: %0.2f\n", *(float*)sensor);
	printf("Addresss %p\n", (void*)sensor);
	
	sensor = &status;
	
    printf("Status: %c\n", *(char*)sensor);
	printf("Address: %p\n", (void*)sensor);
	
	if(*(char*)sensor == 'N'){
		printf("\nNormal.\n");
	}else if(*(char*)sensor == 'W'){
		printf("\nWarning!\n");
	}else if(*(char*)sensor == 'C'){
		printf("\nCritical!!\n");
	}
	 
}
