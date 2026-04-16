#include <stdio.h>


int main(){
	
	FILE *fptr;
	int score, count = 0;
	int val, sum = 0;
	float avg = 0;
	
	
	fptr = fopen("survey.txt", "w");
	
	if(fptr == NULL){
		printf("Error\n");
		return 1;
	}
	
	for(int i = 1; i <= 5; i++){
		printf("Enter Score %d: ", i);
	    scanf("%d", &score);
		
	    fprintf(fptr, "Score: %d\n", score);
		
	}

    
    fclose(fptr);
    printf("Data Written\n");
    
    fptr = fopen("survey.txt", "r");
    
    if(fptr == NULL){
		printf("Error");
		return 1;
	}
	
		
	while(fscanf(fptr, "Score: %d", &val) == 1){
		sum = sum + val;
		count = count + 1;
	}
	
	fclose(fptr);
	
	avg = sum/count;
	
	printf("Average Is: %0.2f ", avg);


}
