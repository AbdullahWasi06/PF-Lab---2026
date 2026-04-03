#include <stdio.h>

int basicAttack(int dmg, int hp){
	hp = hp-dmg;
	return hp;
}

int powerStrike(int dmg, int hp){
	dmg = dmg * 2.5;
	hp = hp - dmg;
	return hp;
}

int heal(int dmg, int hp){
	hp = hp + 20;
	return hp;
} 

int poisonAttack(int dmg, int hp){
	dmg = dmg/2;
	hp = hp - dmg;
	printf("AGGHHH POISON\n");
	return hp;
}

int main(){
	
	int hp = 100;
	int dmg = 25;
	int choice, i;

	
	int (*action)(int, int);
	
	for(i = 1; i <=3; i++){
		
	
	    printf("Enter Choice: \n");
	    printf("1.Basic Attack\n2.Power Strike\n3.Heal\n4.Poison Attack\n");
	    scanf("%d", &choice);
	
	    if(choice == 1){
		   action = basicAttack;
	}
	    else if(choice == 2){
		     action = powerStrike;
	}
	    else if(choice == 3){
		     action = heal;
	}   else{
		     action = poisonAttack;
	}

	    hp = action(dmg, hp);
	    
	    if(hp > 0){
	    	printf("MOVE NUMBER %d, %d HP LEFT!!\n",i, hp);
		}else{
			printf("KO!!\n");
			break;
		}

	
}
    if(hp > 0){
    	printf("SURVIVED!!\n");
	}
	
}
