#include <stdio.h>

int main(){
	int inp = 0;
	do{
		printf("Choose an Option:  \n 1. Addition \n 2. Subtraction \n 3. Exit \n");
		scanf("%d", &inp);	
	}while(inp != 3);
	printf("Task Finished");
}
