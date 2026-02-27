#include <stdio.h>

int main(){
	int num = 7, guess = 0;
	
	printf("Enter a Guess: ");
	scanf("%d", &guess);
	while(num != guess){
		if(guess > 7){
			printf("Too High! \n");
			
		}else if( guess < 7){
			printf("Too Low! \n");
		}
		
	printf("Enter another Guess: ");
	scanf("%d", &guess);
	}printf("Correct!");
	
}
