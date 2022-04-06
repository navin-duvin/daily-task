#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head=NULL;
struct node *newnode,*temp;
int count=0,i=1,pos;

void createnode(){
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;
	}
	count++;
	printf("add last function");
}
void addfirst(){
    struct node *first;
    first= (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&first->data);
    first->next=head;
    head=first;
    count++;
    	printf("add first function");

}
void addmiddle(){
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the position:");
	scanf("%d",&pos);
	if(pos>count){
		printf("Invalid position");
	}else{
		temp=head;
		while(i<pos){
			temp=temp->next;
			i++;
		}
		printf("Enter data:");
		scanf("%d",&newnode->data);
		newnode->next=temp->next;
		temp->next=newnode;		
	}
		printf("add middle function");
}

int listsize(){
	return count;
}
int isempty(){
	return count;
}
void display(){
	struct node *print;
	print=head;
	while(print!=NULL){
		printf("%d-->",print->data);
		print=print->next;
	}
}
void deletefirst(){
	if(head==NULL){
		printf("List is empty");
	}else{
	temp=head;
	head=head->next;
	free(temp);
}
	printf("del first function");

}
void deletelast(){
	struct node *prevnode;
	//prevnode=(struct node *)malloc(sizeof(struct node));
	temp=head;
	while(temp->next!=NULL){
		prevnode=temp;
		temp=temp->next;
	}if(temp==head){
		head=NULL;
	}else{
		prevnode->next=NULL;
	}
	free(temp);
		printf("del last function");

}
void deletemiddle(){
	struct node *nextnode;
	int pos,i=1;
	temp=head;
	printf("Enter the position");
	scanf("%d",&pos);
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
		printf("del middle function");

}
int main(){
	int choice,addposition,s,delposition;
	while(choice !=5)  
    {  
        printf("\nChose one from the below options...\n");  
        printf("1.insert\n2.display\n3.listsize\n4.isempty\n5.delete\n");  
        printf("Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
                printf("press 0 to insert at end:\npress 1 to insert at beginning:\npress 2 to insert at middle:\n");
                scanf("%d",&addposition);
                if(addposition==0){
                	createnode();
                	break;
				}
				else if(addposition==1){
					addfirst();
					break;
				}else{
					addmiddle();
					break;
				}
                break;  
            case 2: 
                display();
                break;  
            case 3:  
				s=listsize();
                printf("listsize:%d\n",s);
                break;  
            case 4:   
               if(!isempty())
                    printf("list is empty");
            	else
                    printf("list is not empty");
                break;
			case 5:
            	printf("press 0 to delete at beginning:\npress 1 to delete at end:\npress 2 to insert at middle:\n");
                scanf("%d",&delposition);
                if(delposition==0){
                	deletefirst();
                	break;
				}
				else if(delposition==1){
					deletelast();
					break;
				}else{
					deletemiddle();
					break;
				}
                break;
            default:  
            {  
                printf("Please Enter valid choice\n ");  
            }   
        }
}
return 0;
}
