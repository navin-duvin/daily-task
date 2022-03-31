#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int tic_no;
	char name[30];
	int age;
	struct node *next;
	int cost;
};

void display();
void find(int n);
int count=0,n=0,max=3;
struct node *front,*front1;

void reserve()
{  	    int ch;
		struct node *temp,*temp2;
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter the name of passenger :");
		scanf("%s",&temp->name);
		printf("Enter the age of passenger :");
		scanf("%d",&temp->age);
		if(temp->age<18)
		temp->cost=100;
		else
		temp->cost=125;
		temp->next=NULL;
	    if(count<max)
		{count++;
		 n++;
		if(front==NULL)
		front=temp;
		else
		{temp2=front;
		 while(temp2->next!=NULL)
		 temp2=temp2->next;
		 temp2->next=temp;
		}
 	  temp->tic_no=n;
	  printf("\nYour ticket details are:\n");
      printf("Tic_no =%d   Ticket fare = %d\n",temp->tic_no,temp->cost);
	   }
	else{
 printf("Enter 1 for this registraion to be included in waiting list:");
	scanf("%d",&ch);
	if(ch==1)
	     {if(front1==NULL)
	      front1=temp;
	      else
	         {temp2=front1;
		      while(temp2->next!=NULL)
		      temp2=temp2->next;
		      temp2->next=temp;
		      }
		 }
    }
}

void cancel(int k)
{
	int count2=0;
	struct node *temp,*temp1,*temp2;
	temp=front;
	temp1=front;
	if(temp==NULL)
	printf("Invalid ticket no\n");
	else if(temp->tic_no==k)
	{front=front->next;
	 printf("Ticket no %d booked by %s has been canceled\n",temp->tic_no,temp->name);
     free(temp);
     count--;
     if(front1!=NULL)
       { temp2=front;
		 while(temp2->next!=NULL)
		 temp2=temp2->next;
		 temp2->next=front1;
		 front1=front1->next;
		 temp2->next->next=NULL;
		 count++;
		 n++;
		 temp2->next->tic_no=n; 
	   }
    }
	else
	{
	while(temp->tic_no!=k && temp->next!=NULL)
	{
	  temp1=temp;
	  temp=temp->next;
	}
	if(temp->tic_no!=k)
	{
		printf("Invalid ticket no\n");
	}
	else
	{
		temp1->next=temp->next;
		printf("Ticket no %d booked by %s has been canceled\n",temp->tic_no,temp->name);
		free(temp);
		count--;
	    if(front1!=NULL)
       { temp2=front;
		 while(temp2->next!=NULL)
		 temp2=temp2->next;
		 temp2->next=front1;
		 front1=front1->next;
		 temp2->next->next=NULL;
		 count++;
		 n++;
		 temp2->next->tic_no=n; 
	   }
	}
  }
  
}

void totfare()
{struct node *temp;
  temp=front;
  int sum=0;
  if(temp==NULL)
  printf("No tickets booked yet\n");
  else
  {
  	while(temp!=NULL)
  	{
  	   sum=sum+temp->cost;
		 temp=temp->next;	
	  }
	  
	  printf("Total Cost = Rs.%d\n",sum);
  }
	
}

void display()
{ struct node *temp;
  temp=front;
  int d=0;
  if(temp==NULL)
  printf("No tickets reserved\n");
  else{
   printf("\nTickets booked are:\n");
  while(temp!=NULL ){
  d++;
  printf("\n%d.]Tic_no =%d\t",d,temp->tic_no);
  printf("Name =%s\t",temp->name);
  printf("Ticket fare = %d\t",temp->cost);
  printf("Age =%d\n",temp->age);
  temp=temp->next;
  } 
 }	
}

void waiting_list()
{ int d=0;
  struct node *temp;
  temp=front1;
  if(temp==NULL)
  printf("Waiting List is Empty\n");
  else{
   printf("\nWaiting List Reservation details:\n");
   while(temp!=NULL ){
   	d++;
  printf("\n%d.]Name =%s\t",d,temp->name);
  printf("Ticket fare = %d\t",temp->cost);
  printf("Age =%d\t",temp->age);
  temp=temp->next;
  } 
 }	
}

int main()
{   front=NULL;
    front1=NULL;
    printf("\t\t\t***RAILWAY RESERVATION***\t\t\t\t\n");
	int ch =1,no,choice;
	while(ch==1)
	{
	printf("\n1.Reserve a ticket  2.Cancel Booking  3.Display Reservation details  4.Display Fare  5.Display Waiting List 6.Exit\n");
	printf("Enter your choice:");
	scanf("%d", &choice); 
	switch(choice)
	{	
		case 1 : reserve();
		         break;
	    case 2:printf("Enter your ticket no to be deleted:");
	           scanf("%d",&no);
		       cancel(no);  
			   break;  
	 case 3: display() ;    
	          break;
	  case 4:totfare();
	         break; 
		case 5:waiting_list();
		       break;	        
	   case 6:exit(0);       
	 default: printf("Wrong choice!\n");       
	}
    }
}