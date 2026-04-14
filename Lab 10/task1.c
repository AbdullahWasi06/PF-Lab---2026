#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char name[20];
	int flag = 1;
	
	printf("Enter A string: ");
	scanf("%s", name);
	
	int len = strlen(name);
	
	if(len >= 3 && len <= 20){
		
		printf("Valid in Length\n");
		
		for(int i = 0; i < len; i++){
			if(isdigit(name[i])){
				flag = 0;
				break;
			}
		}
		if(flag == 0){
			printf("But Contains Digits\n");
		}
	}else{
		printf("Invalid");
	}
	
	
}
