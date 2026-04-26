#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	
	printf("Enter Number Of Students: \n");
	scanf("%d", &n);
	
	float *arr = (float *)malloc(n * sizeof(float));
	
	if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
	
	for(int i = 0; i < n; i++){
		printf("Enter Grade for Student %d: \n", i+1);
		scanf("%f", &arr[i]);
	}
	for(int i = 0; i < n; i++){
		printf("Grade For Stuent %d is %0.2f\n", i+1, arr[i]);
	}
	
	free(arr);
}
