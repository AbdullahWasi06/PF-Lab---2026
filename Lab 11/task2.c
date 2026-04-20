#include <stdio.h>


int countUpper(char *str){
	
	if( *str == '\0'){
		return 0;
		
	}
	else if(*str >= 'A' && *str <= 'Z'){
		return 1 + countUpper(str + 1);	
	}
	else{
		return countUpper(str + 1);
	}
}

int main(){
	char password[100];
	int upper;
	
	printf("Enter Password: ");
	scanf("%s", password);
	
	upper = countUpper(password);
	
	printf("%d Uppercase Letters", upper);
	
	
	
}
