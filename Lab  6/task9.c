#include <stdio.h>

int main(){
	int sum =0, n;
	printf("Enter number of Boxes: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i ++){
		sum = sum + i;
	}printf("Your Total Decor Items Are: %d ", sum);
}
