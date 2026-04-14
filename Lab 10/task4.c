#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	char names[5][30];
	char search[30];
	
	for(int i = 0; i < 5; i++){
		printf("Enter name %d: \n", i+1);
		fgets(names[i], sizeof(names[i]), stdin);
		
		names[i][strcspn(names[i], "\n")] = '\0';
		
	}
	printf("Names: \n");
	for(int i = 0; i < 5; i++){
		printf("%s\n", names[i]);
		
	}
	printf("Enter Student To Search For: \n");
	scanf("%s", search);
	
	for(int i =0; i < 5; i++){
		if(strcmp(names[i], search) == 0){
			printf("Found");
		}
	}
}
