#include <stdio.h>

int main(){
	int password = 1234, attempt = 0;
	do{
		printf("Enter Password: ");
		scanf("%d", &attempt);
		if( password != attempt){
		  printf("Incorrect, Try Again \n");
	    }
		
	}while(attempt != 1234);
	printf("Password Accepted!");
	
}
