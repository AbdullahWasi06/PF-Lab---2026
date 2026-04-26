//a)
#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int * arr = (int *)malloc(3 * sizeof(int));
  if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
	
	for(int i = 0; i < 3; i++){
		printf("Enter Contact %d: \n", i + 1);
		scanf("%d", &arr[i]);
		
	}
}

//b)
#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int * arr = (int *)malloc(3 * sizeof(int));
	
	if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
	
	for(int i = 0; i < 3; i++){
		printf("Enter Contact %d: \n", i + 1);
		scanf("%d", &arr[i]);
		
	}
	
	int *temp = (int *)realloc(arr, 5 * sizeof(int));
	
	if(temp == NULL){
		printf("Allocation failed \n");
		free(arr);
		return 1;
	}
	arr = temp;
	
	
	printf("EXPANDED\n");
	for(int i = 3; i < 5; i++){
		printf("Enter Contact %d: \n", i + 1);
		scanf("%d", &arr[i]);	
	}
	for(int i = 0; i < 5; i++){
		printf("Contact %d is %d\n", i + 1, arr[i]);	
	}
	
	free(arr);
  arr = NULL;
}
 
