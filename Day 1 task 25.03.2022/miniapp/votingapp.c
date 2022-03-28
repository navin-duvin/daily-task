#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cand1Votecount=0;
int cand2Votecount=0;
int notacount=0;
char canditate1[]="A";
char canditate2[]="B";
char nota[] = "Nota";

void vote(){

	printf("candidateinformation\n");
	printf("press 1 to vote for Candidate1 \n");
	printf("press 2 to vote for Candidate2 \n");
	printf("press 0 to vote for nota \n");


	char name[40];
	int symbol;
	int age;

	printf("Enter your name:");
	scanf("%s",name);

	printf("Enter your age:");
	scanf("%d",&age);

	if(age >=18){
		printf("Your eligible to vote\n");
	}
	else{
		printf("Your are not eligible\n");
		exit(0);
	}
	printf("Enter the symbol to vote for the candidates\n");
	scanf("%d",&symbol);

	switch(symbol){
		case 1:
			cand1Votecount++;
			break;
		case 2:
			cand2Votecount++;
			break;
			
		case 0:
			notacount++;
			break;
		default:
            printf("Wrong symobol !! Please retry");
	}
	printf("Thank you for VOTING\n");
}
void result(char candidate1[],char candidate2[]){
	printf("Result:\n");	
	printf("A gets vote of %d\n",cand1Votecount);
	printf("B gets vote of %d\n",cand2Votecount);
	printf("Nota gets vote of %d\n",notacount);

	if((cand1Votecount>cand2Votecount) && (cand1Votecount>notacount)){
		printf("Winner is %s\n",candidate1);
	}else if((cand2Votecount>cand1Votecount) && (cand2Votecount > notacount)){
		printf("Winner is %s\n",candidate2);
	}else if((notacount > cand1Votecount) && (notacount > cand1Votecount)){ 
		printf("Winner is %s\n",nota);
	}
	else{
		printf("No winning candidate\n");
	}
}
void Exit(){
		exit(0);

}

int main(){
	printf("--------------VOTING MACHINE-------------\n");
	printf("--------------Welcome to Election--------\n");


	char candidate1[]="A";
    char candidate2[]="B";

    int choice;
	do{
	printf("Enter your choice\n 1.cast for vote\n 2.Result\n 3.Exit\n");
	scanf("%d",&choice);

			switch(choice){
				case 1:
			          vote();
			          break;
				case 2:
				      result(candidate1,candidate2);
				      break;
				case 3:
				      Exit();
				default:
					printf("Enter the correct choice:");
			}
	}
	while(choice !=0);

	return 0;

}
