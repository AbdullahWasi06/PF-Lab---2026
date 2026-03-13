#include <stdio.h>

int main(){
	int sum =0;
	int array[4][3] = {
		{80, 75, 90}, 
		{60, 70, 85}, 
		{70, 56, 87}, 
		{78, 90, 76}
	};
	
	for(int i = 0; i<4; i++){
		for(int j = 0; j< 3; j++){
			sum = sum + array[i][j];
			
	}
	printf("Total for student %d is %d\n", i + 1, sum);
	sum = 0;
}
}
