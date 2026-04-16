#include <stdio.h>


int main(){
	
	FILE *fptr;
	char name[50];
	char quant;
	char line[100];
	
	
	fptr = fopen("inventory1.txt", "a");
	
	if(fptr == NULL){
		printf("Error\n");
		return 1;
	}
	
	
	printf("Enter Product Name 1 and Its Quantitiy: \n");
	scanf("%s %c", name, &quant);
		
	fprintf(fptr, "Name: %s \nQuantity: %c \n", name, quant);
    
    fclose(fptr);
    printf("Data Written\n");
    
    fptr = fopen("inventory1.txt", "r");
    
    if(fptr == NULL){
		printf("Error");
		return 1;
	}
	
		
	while(fgets(line, sizeof(line), fptr) != NULL){
		printf("%s", line);
	}
	
	fclose(fptr);
	
	printf("Second time\n");
	
	
	
		fptr = fopen("inventory.txt", "a");
	
	if(fptr == NULL){
		printf("Error");
		return 1;
	}
	
	
	printf("Enter Product Name 2 and Its Quantitiy: \n");
	scanf("%s %c", name, &quant);
		
	fprintf(fptr, "Name: %s \nQuantity: %c \n", name, quant);
    
    fclose(fptr);
    printf("Data Written\n");
    
    fptr = fopen("inventory.txt", "r");
    
    if(fptr == NULL){
		printf("Error");
		return 1;
	}
	
		
	while(fgets(line, sizeof(line), fptr) != NULL){
		printf("%s", line);
	}
	
	fclose(fptr);

}
