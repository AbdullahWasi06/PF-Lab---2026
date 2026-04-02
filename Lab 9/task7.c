#include <stdio.h>

int main(){
	
	int arr[6] = {60, 37, 54, 29, 46, 38};
	
	int *p = arr;
	int i, highest = 0;
	printf("Original Array: \n");
	for(i = 0; i < 6; i++){
		printf("%d ", *(p+i));
	}
	
	
	
	for(i = 0; i < 6; i++){
		if(*(p + i) > highest){
			highest = *(p + i);
		}
	}
	
	for(i = 0; i < 6; i++){
		*(p + i) = (int)(((float)*(p + i) / highest) * 100);
		
	}
	
	printf("\nScaled Marks: \n");
	for(i = 0; i < 6; i++){
		printf("%d ", *(p+i));
	}

}
