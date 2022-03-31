#include <stdio.h>

#define MAX 5

int stack[MAX];
int top=-1;
int item;
int temp;

void push(){
    printf("Enter the number to push:\n");
    scanf("%d",&item);
    if(top ==MAX-1){
        printf("Stack overflow\n");
        return ;
    }
    top = top+1;
    stack[top] = item;
   
}
int  pop(){

    if(top == -1){
        printf("Stack is empty\n");
        return -1;
    }
   
    temp = stack[top];
    top = top-1;
   
        return temp;
   
}
int stacksize(){
    return top+1;
   
}
int isempty(){
    if(top==-1){
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
        printf("\n1.Push\n2.Pop\n3.stacksize\n4.isempty\n");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                int s =stacksize();
                printf("stacksize:%d\n",s);
                break;  
            }  
            case 4:   
            {  
                int e=isempty(); 
                if(e==1){
                    printf("Stack is empty");
                }else{
                    printf("Stack is not empty");
                }
                
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
