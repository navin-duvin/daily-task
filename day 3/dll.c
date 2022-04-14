#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *prev;
  int data;
  struct node *next;
};

struct node *head = NULL;
struct node *temp;
int size=0;

void addfirst (int value){
  struct node *newnode = (struct node *) malloc (sizeof (struct node)); 
  newnode->data = value; 
  if (head == NULL)   
    {
      head = newnode;  
      newnode->next = NULL;
      newnode->prev = NULL;
      size++;
      return;
    }
  temp = head; 
  temp->prev = newnode;
  newnode->next = temp;
  newnode->prev = NULL;
  head = newnode; 
  size++;
}


void addlast (int value){
  struct node *newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = value;  
  if (head == NULL) 
    {
      newnode->next = NULL;  
      head = newnode;
      newnode->prev = NULL;
      return;
    }
  temp = head;  
  while (temp->next != NULL)   
    {
      temp = temp->next;  
    }
  temp->next = newnode;  
  newnode->next = NULL;
  size++;
}

int deletefirst(){
  struct node *firstnode;   
  int value;
  firstnode = head;
  head = firstnode->next; 
  firstnode->next->prev = NULL; 
  value = firstnode->data;  
  free (firstnode);	
  size--;		
  return value;
}

int deletelast(){
  struct node *tail;
  int value;
  tail = head;   
  while (tail->next != NULL)  
    {
      tail = tail->next;  
    }
  tail->prev->next = NULL;  
  value = tail->data;       
  free (tail);
  size--;
  return value;
}

void display(){
  struct node *temp;
  temp = head;
  while (temp->next != NULL)
    {
      printf ("%d-->", temp->data);
      temp = temp->next;
    }
  printf ("%d\n", temp->data);
}

int listsize(){
	return size;
}
int isempty(){
	if(size==0)
		return 1;
	else
		return 0;
}
int main ()
{
  int choice,s,	 value, value2;

  while(1){
      printf("Enter the below options:\n1.addfirst\n2.addlast\n3.deletefirst\n4.deletelast\n5.display\n6.listsize\n7.isempty\n8.exit\n");
      scanf ("%d", &choice);
      switch (choice)
        {
        case 1:
          printf ("Enter the value\n");
          scanf ("%d", &value);
          addfirst (value);
          break;
        case 2:
          printf ("Enter the value\n");
          scanf ("%d", &value);
          addlast (value);
          break;
        case 3:
          value = deletefirst();
          printf ("value deleted: %d\n", value);
          break;
        case 4:
          value = deletelast();
          printf ("value deleted: %d\n", value);
          break;
        case 6:
        	s=listsize();
        	printf("listsize:%d\n",s);
        	break;
        case 7:
        	if(isempty())
        		printf("List is empty\n");
        	else
        		printf("List is  not empty\n");
        	break;
        case 5:
          display();
          break;
        case 8:
          exit (0);
        default:
          printf("Enter valid choice");
        }
    }
    return 0;
}
