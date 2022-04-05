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
}
void addfirst(){
    struct node *first;
    first= (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&first->data);
    first->next=head;
    head=first;
    count++;
}
void middle(){
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
	
}
void delete(){
	
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

int main(){
	int choice,position,s;
	while(choice != 5)  
    {  
        printf("\nChose one from the below options...\n");  
        printf("1.insert\n2.display\n3.listsize\n4.isempty\n5.delete\n");  
        printf("Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
                //createnode();
                printf("press 0 to insert at end:\npress 1 to insert at beginning:");
                scanf("%d",&position);
                if(position==1){
                	addfirst();
                	break;
				}
				if(position==0){
					createnode();
					break;
				}else{
					middle();
					break;
				}
                break;  
            case 2: 
                display();
                break;  
            case 5:
                delete();
                break;
            case 3:  
				s=listsize();
                printf("listsize:%d\n",s);
                break;  
            case 4:   
               if(isempty())
                    printf("list is empty");
            	else
                    printf("list is not empty");
            
                break;   
            default:  
            {  
                printf("Please Enter valid choice\n ");  
            }   
        }

}
}
