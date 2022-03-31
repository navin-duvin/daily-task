#include <stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *head =NULL;
NODE *tail = NULL;
int size=0;
NODE *temp;
NODE * createnode(){
    NODE *newnode;
    newnode = (NODE*)malloc(sizeof(NODE));
    if(newnode==NULL){
        return NULL;
    }
    printf("Enter the data:\n");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode; 
}

NODE * insertnode(int position){
    NODE *th=head;
    while(position>1){
        th=th->next;
        --position;
    }
    temp = createnode();
    temp->next=th->next;
    th->next=temp;
}

void delete(int position){
    NODE * th=head ,*temp=NULL;
    if(head==NULL){
        printf("List is empty");
    }
    else{
        while(position>1){
            th= th->next;
            position=position-1;
        }
        temp = th->next;
        th->next=temp->next;
        free(temp);
    }
}

void traverse(NODE *th){
    if(th==NULL){
        printf("list is empty");
    }
    else{
        while(th!=NULL){
            printf("%d",th->data);
            ++size;
            th=th->next;
        }
    }
}

int listsize(){
    traverse(head);
    return size;
}

int isEmpty(){
    if(size==0)
        return 1;
    else
        return 0;
}

int main(){
    int choice,position ;
    printf("Enter the choice:\n");
    printf("1.insernode\n2.delete\n3.listsize\n4.isEmpty\n");
    scanf("%d",&choice);
    while(choice!=0){
        switch(choice){
            case 1:printf("Enter the position");
                scanf("%d",&position);
                insertnode(position);
                break;
            case 2:printf("Enter the position");
                scanf("%d",&position);
                delete(position);
                break;
            case 3:
                printf("size=%d",listsize());
                break;
            case 4:
                isEmpty();
                break;
            default:
                printf("Enter the correct choice");
        }
    }   
    return 0;
}
