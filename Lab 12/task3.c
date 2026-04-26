#include <stdio.h>
#include <stdlib.h>



int main(){

	int n;
	printf("Enter Number Of Sensors: \n");
	scanf("%d", &n);

	float * arr = (float *)calloc(n, sizeof(float));

	printf("Initial Values \n");

	for(int i=0; i < n; i++){
		printf("%0.2f\n", arr[i]);
	}

		
	for(int i=0; i < n; i++){
		printf("Enter Value of Sensor %d: \n", i + 1);
		scanf("%f", &arr[i]);
		
	}

	for(int i=0; i < n; i++){
		printf("Value of Sensor %d is %0.2f\n", i + 1, arr[i]);

	}


}
