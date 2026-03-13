#include <stdio.h>

int main(){
	
	int i , j, max = 0, sum = 0;
	int temp[7][3] = {
	{23,24,25}, 
	{26,23,27}, 
	{22,21,20}, 
	{28,26,27}, 
	{30,29,28}, 
	{31,30,28}, 
	{31,33,34}
	};
	
	for(i = 0; i<7; i++){
		for(j = 0; j < 3; j++){
			if(temp[i][j] > max){
				max = temp[i][j];
			}
		}
	}
	printf("Highest Temperature of the week was %d Celsius\n", max);
	
	for(i = 0; i<7; i++){
		for(j = 0; j < 3; j++){
		    sum = sum + temp[i][j];
			}
			printf("Avg temp for Day %d was %d\n", i+1, sum/3);
		    sum = 0;
		}
		
}
