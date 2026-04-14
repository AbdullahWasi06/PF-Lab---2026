#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char pass[50] = {"takeonme"};
	char epass[50];
	int attempt = 1;

	int len = 8;
	int elen = 8;

	
	if(elen > 0){
		while(attempt <=3){
			printf("Enter Password: \n");
	        scanf("%s", epass);
	        
			if(strcmp(pass, epass) == 0){
				printf("Match");
				break;
			}
			if(attempt >= 2){
				int result = strncmp(pass, epass, 3);

                if (result < 0) {
                    printf("password is less than entered passsword\n");
                }else {
                    printf("password is greater than entered password\n");
               }
			}
			attempt++;	
		}
		if(attempt > 3){
			printf("Locked Out");
		}
	}

}
