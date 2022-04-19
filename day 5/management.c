//10. Build the basic management application by your own choice using functions

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct user{
	char username[40];
	char password[40];
}u[20];

struct store{
	char name[30];
	char type[30];
	float price;
	int counter;

}fruit[20];

int count=0;
int usercount=0;
void purchase();
void createaccount(){
	    //printf("Create account to use the management system\n");
            printf("Enter the username:\n");
            scanf("%s",u[count].username);
            printf("Enter the password:\n");
            scanf("%s",u[count].password);
            usercount++;
}
void addfruit(){
	printf("Enter the fruit to add:\n");
        printf("Enter the fruit name,type{packed,fresh},price,count of fruits\n");
        scanf("%s%s%f%d",fruit[count].name,fruit[count].type,&fruit[count].price,&fruit[count].counter);
	count++;
}
void login(){
	printf("Enter the username and password to add fruit to the store:\n");
	char user[30];
	scanf("%s",user);
	char password[40];
	int success;
	for(int i=0;i<count;i++){
		if((strcmp(u[i].username,user))==0){
			printf("Username:%s found\n",user);
			printf("Enter the password:\n");
			scanf("%s",password);
				if(u[i].password == password){
					printf("Login successful\n");
					printf("Enter 1 to addfruit:\n");
					printf("Enter 2 to purchase fruits\n");
					if(success==1){
						addfruit();
					}else if(success==2){
						purchase();
					}else{
						printf("No options available\n");
					}
				}
		}
	}
}
void fruitdetails(){
		for(int i=0;i<count;i++){
			printf("Fruit name:%s\ttype:%s\tPrice:%f\tfruitCount:%d\n",fruit[i].name,fruit[i].type,fruit[i].price,fruit[i].counter);

		}
}

void purchase(){
		fruitdetails();
		printf("Enter the fruit you want:\n");
		char f[50];
		int fcount;
		scanf("%s",f);
		for(int i=0;i<count;i++){
			if(f == fruit[i].name){
				printf("Enter the count of fruits:\n");
				scanf("%d",&fcount);
				fruit[i].counter = fruit[i].counter-fcount;
			}
		}
}


int main(){
	int choice;
	while(1){
	    printf("-------------------------------------------------\n");
	    printf("	         	Welcome		             \n");
	    printf("-----------FRUIT STORE MANAGEMENT SYSTEM---------\n");
	    printf("-------------------------------------------------\n");

	    printf("Create account to use the management system\n");
	    printf("Enter your choice:\n");
	    printf("1.create account\n2.login to Addfruit to the store\n3.Print fruit details\n4.purchase fruit\n5.exit\n");
	    scanf("%d",&choice);
	
	switch(choice){
		case 1:
		    createaccount();
		    break;
		case 2:
		    login();
		    break;
		case 3:
		    fruitdetails();
		    break;
		case 4:
		    purchase();
		    break;	
		 case 5:
		   exit(0);
		default:
			printf("Enter the valid choice\n");
	}
	}
	return 0;
}
