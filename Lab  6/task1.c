#include <stdio.h>

int main(){
	int status, attendee = 0;
	for(int i = 1; i <= 30; i++){
		printf("Is student %d Present or Absent: ", i);
		scanf("%d", &status);
		if(status == 1){
			attendee = attendee + 1;
		}
		
	}printf("Students Present: %d \n", attendee);
	printf("Students Absent: %d \n", 30-attendee);
}
