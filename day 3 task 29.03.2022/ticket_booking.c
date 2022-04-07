/*
Write an application for booking railway ticket reservation system. The application should have four functionalities.

Book
Cancel
Print booked tickets (details with summary)
Print available tickets (details with summary)
Conditions for booking:

There are a total of 63 berths for 63 confirmed tickets, 9 berths for 18 RAC tickets and 10 tickets in waiting-list. If the waiting-list ticket count goes above 10, print as â€˜No tickets availableâ€™. The following passenger details should be obtained from the user.

Name
Age
Gender
Berth Preference
The tickets should not be allocated for children below age 5.But, their details should be stored. Lower berth should be allocated for persons whose age is above 60 and ladies with children if available. Side-lower berths should be allocated for RAC passengers.

Conditions for cancelling:

Whenever a ticket is cancelled, a ticket from RAC should be confirmed and a waiting-list ticket should move to RAC.

Conditions for printing booked tickets:

Print all the tickets that are filled along with the passenger details and at the end, print the total number of tickets that are filled.

Conditions for printing available tickets:

Print all the tickets that are unoccupied and at the end, print the total number of tickets that are unoccupied.

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
struct details{
	char name[20];
	int age;
	char gender[10];
	char berth[10]; 
	int passid;
}passenger[100];

int ticket_no=0;
int confirmticket=0; //MAX 10
int RAC=0; //MAX 4
int waitinglist=0; //MAX 3
int passengerid=1000;
int count=0;
int confirmavailable,RACavailale,waitingavailable;
void bookticket(){
	printf("Enter the passenger name:");
	scanf("%s",passenger[count].name);
	printf("Enter the passenger age:");
	scanf("%d",&passenger[count].age);
	printf("Enter the passenger gender:");
	scanf("%s",passenger[count].gender);
	printf("Enter the passenger berth Preference:");
	scanf("%s",passenger[count].berth);
	printf("Your passenger id:%d\n",passengerid);
	passengerid++;
	passenger[count].passid=passengerid;
	count++;
	printf("Your ticket_no:%d\n",ticket_no);
	ticket_no++;
	
	if(ticket_no<=10 ||  ticket_no==10){
		confirmticket++;
	}else if(ticket_no>10 && RAC<=3){
		RAC++;
	}
	else if(ticket_no >13 && waitinglist<=2){
		waitinglist++;
	}else{
		printf("No tickets available");
		}
}

void cancelticket(){
	int cancel,k,x;
	printf("Enter the passengerid:\n");
	scanf("%d",&cancel);
	for(k=0;k<count;k++){
		if(passenger[k].passid==cancel){  
			printf("--------------------------------------------------------\n");
			printf("please verify your details:\n");
			printf("Name:%s\tAge:%d\tGender:%s\tBerth:%s\t\n",passenger[k].name,passenger[k].age,passenger[k].gender,passenger[k].berth);
		    printf("--------------------------------------------------------\n");
				for(x=k;x<count;x++){
					passenger[x].passid=passenger[x+1].passid;
					passenger[x].age=passenger[x+1].age;
					strcpy(passenger[x].name,passenger[x+1].name);
					strcpy(passenger[x].name,passenger[x+1].name);
					strcpy(passenger[x].berth,passenger[x+1].berth);
					strcpy(passenger[x].gender,passenger[x+1].gender);
				}
			if(RAC==0 && waitinglist==0){
				confirmticket--;
				return ;
			}else{
				RAC--;
			    waitinglist--;
				confirmavailable++;	
			}  
			count--;	
		}
	}
}

void bookedticket(){
	printf("Booked tickets:\n");
	printf("______________________________________________________\n");
	printf("Confirmed ticket:%d\t",confirmticket);
	printf("RAC ticket:%d\t",RAC);
	printf("Waiting list:%d\t\n",waitinglist);
	printf("_______________________________________________________\n");
}

void availableticket(){
	confirmavailable=10-confirmticket;
	RACavailale=4-RAC;
	waitingavailable=3-waitinglist;
	printf("Available tickets:\n");
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("Confirmed ticket:%d\t",confirmavailable);
	printf("RAC ticket:%d\t",RACavailale);
	printf("Waiting list:%d\t\n",waitingavailable);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
}
void passengerdetails(){
	int j;
	for(j=0;j<count;j++){
		if(passenger[j].passid==0){
			return ;
	}else{
	printf("--------------------------------------------------------\n");
	printf("Passenger details:\n");
	printf("Name:%s\tPassengerid:%d\tAge:%d\tGender:%s\tBerth:%s\t\n",passenger[j].name,passenger[j].passid,passenger[j].age,passenger[j].gender,passenger[j].berth);
	printf("--------------------------------------------------------\n");
	}
	}
}
int main(int argc, char  *argv[])
{	
	int choice;
	printf("======================================================\n");
	printf("                      WELCOME                         \n");
	printf("           RAILWAY TICKET BOOKING SYSTEM                         \n");
	printf("======================================================\n");

	while(choice !=6){
		printf("Enter the below options:\n");
		printf("1.Book ticket\n2.cancel ticket\n3.booked ticket\n4.available ticket\n5.passenger details\n6.exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				bookticket();
				break;
			case 2:
				cancelticket();
				break;
			case 3:
				bookedticket();
				break;
			case 4:
				availableticket();
				break;
			case 5:
				passengerdetails();
				break;
			case 6:
				exit(0);
			default:
				printf("Enter the valid choice:");
		}
	}
	return 0;
}
