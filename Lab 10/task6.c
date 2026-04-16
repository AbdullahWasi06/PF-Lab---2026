#include <stdio.h>


int main(){
	
	FILE *fptr ;
	char name[50];
	char grade; 
	char line[100];
		
	fptr = fopen("grades.txt", "w");
	
	if(fptr == NULL){
		printf("Error\n");
		return 1;
	}
	
	for(int i = 1; i <=3; i++){
		printf("Enter Name %d and Their Grade: \n", i);
		scanf("%s %c", name, &grade);
		
		fprintf(fptr, "Name: %s \nGrade: %c \n", name, grade);
    }
    
    fclose(fptr);
    printf("Data Written\n");
    
    fptr = fopen("grades.txt", "r");
    
    if(fptr == NULL){
	printf("Error");
	return 1;
	}
	printf("Reading: \n");
	while(fgets(line, sizeof(line), fptr) != NULL){
		printf("%s", line);
		
	}
	
	fclose(fptr);
		
	
    

}
