#include <stdio.h>

int countWays(int n){
	
	
	if(n==0){
		return 1;
	}
	else if( n == 1){
		return 1;
	}
	else if( n > 1){
		return countWays(n-1) + countWays(n-2);
	}
}

int main(){
	
	int n, ways;
	
	printf("Enter 1 < N < 15: ");
	scanf("%d", &n);
	
	ways = countWays(n);
	
	printf("There Are %d Ways", ways);
	
}
