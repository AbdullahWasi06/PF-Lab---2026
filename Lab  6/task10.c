#include <stdio.h>

int main(){
	int inp = 0, dist = 0, pass = 0, fail = 0;
	printf ("Enter Score: ");
	scanf("%d", &inp);
	while(inp != -1){
		if(inp >= 75){
			dist = dist + 1;
		}
		else if(inp >= 50 && inp <=74){
			pass = pass + 1;
		}
		else{
			fail = fail + 1;
		}
		printf ("Enter Score: ");
        scanf("%d", &inp);
		
	}printf("Sentinal Value Detected, Exit Program \n");
	printf("Total Distinctions: %d \n", dist);
	printf("Total Passed: %d \n", pass);
	printf("Total Failed: %d \n", fail);
}
