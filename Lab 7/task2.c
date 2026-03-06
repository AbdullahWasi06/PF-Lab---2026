#include <stdio.h>

int main(){
	
	int array[10]={};
	int i, val, count = 0;
	for(i = 0; i< 10; i++ ){
	printf("Enter 10 Values: ");
	scanf("%d", &array[i]);
	}
	printf("Enter value to be found: ");
	scanf("%d", &val);
	
	for(i = 0; i< 10; i++){
		if(array[i] == val){
			count = count + 1;
		}
	}
	if(count > 0){
		printf("Value occured %d times", count);
	}
	else{
		printf("Value not found");
	}

}
