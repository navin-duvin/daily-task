#include <stdio.h>

#define MAX 5

int queue[MAX];
int front=0,rear=0;
int size=0;
int item;

void enqueue(){
	printf("Enter the element to enqueue:");
	scanf("%d",&item);

	rear = (rear+1)%MAX; //empty 1 slot to 
	if(front==rear){
		printf("Queue is full\n");
		if(rear==0){
			rear = MAX-1;
		}else{
			rear = rear-1;
		}
		return;
	}
	queue[rear] = item;
	++size;
}

int dequeue(){
	if(front==rear){
		printf("Queue is empty\n");
		return -1;
	}
	front =(front+1)%MAX; 
	--size;
	return queue[front];
}

int queuesize(){

	return size;
}

int isempty(){
	if(size==0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
    int choice;
    
    while(choice != 4)  
    {  
        printf("Chose one from the below options...\n");  
        printf("\n1.enqueue\n2.dequeue\n3.queuesize\n4.isempty\n");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                enqueue();  
                break;  
            }  
            case 2:  
            {  
                dequeue();  
                break;  
            }  
            case 3:  
            {  
                int s =queuesize();
                printf("queuesize:%d\n",s);
                break;  
            }  
            case 4:   
            {  
                if(isempty())
                    printf("queue is empty");
                else
                    printf("queue is not empty");
                
                break;   
            }  
            default:
            {  
                printf("Please Enter valid choice\n ");  
            }   
        }

}
return 0;
}
