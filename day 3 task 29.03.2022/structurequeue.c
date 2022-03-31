#include <stdio.h>

struct queue{
	int data;
	struct queue*link;
};

typedef struct queue node;
node *current,*first *last;

void create(){
	int i,n;
	printf("Enter the number of elements in the list:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
			if(i==0){
				first =(node *)malloc(sizeof(node));
				current = first;
			}
			else{
				current->link =(node*)malloc(sizeof(node));
				current = current->link;
			}
			printf("Enter the data:");
			scanf("%d",&current->data);
	}
	last =current;
	current->link=NULL;
}

void insert(){
	printf("Enter the data to insert:");
	current=(node*)malloc(sizeof(node));
	scanf("%d",current->data);
	current->link=current;
	last->link=current;
	last=current;
}

void delete(){
	if(first==NULL){
		printf("queue is empty");
	}else{
		current=first;
		first=first->link;
		current>link=NULL;
		printf("Deleted elements is %d",current->data);
		free(current);

	}
}

void display(){
	current=first;
	while(current!=NULL){
		printf("%d",current->data);
		current=current->link;
	}
}

int main()
{
	int choice;
	while(1){
		printf("Enter your choice:");
		printf("1.create\n2.insert\n3.delete\n4.exit\n");
		scanf("%d",&choice);

		switch(choice){
			case 1:
				create();
				break;
			case 2:
				insert();
				break;
			case 3:
				delete();
				break;
			case 4:
				return;
			default:
				printf("Enter the correct choice:");

		}
	}
	return 0;
}







