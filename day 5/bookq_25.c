/*
25. Create a menu in which the following can be done.
1 - Display book information
2 - Add a new book
3 - Display all the books in the library of a particular author
4 - Display the number of books of a particular title
5 - Display the total number of books in the library
6 - Issue a book
(If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library{
	char bookname[30];
	char author[50]	;
	int bookcount;
	
}book[50];


int count=0;
void Display(){
	for(int i=0;i<count;i++){
		printf("-------------------------------\n");
		printf("Display book information:\n");
		printf("BookName:%s\tBookauthor:%s\tBookcount:%d\t\n",book[i].bookname,book[i].author,book[i].bookcount);
		printf("\n-------------------------------\n");
	}
}

void addbook(){
		printf("Enter the bookname:\n");
		scanf("%s",book[count].bookname);
		printf("Enter the author name:\n");
		scanf("%s",book[count].author);
		printf("Enter the bookcount:\n");
		scanf("%d",&book[count].bookcount);
		count++;

}
void displayauthorbook(){
	char authorname[20];
	printf("Enter the author name:\n");
	scanf("%s",authorname);

	for(int i=0;i<count;i++){
		if(strcmp(book[i].author,authorname)==0){
			printf("BookName:%s\tBookauthor:%s\tBookcount:%d\t\n",book[i].bookname,book[i].author,book[i].bookcount);
		}
	}
}
void displaytitle(){
	char title[50];
	printf("Enter the book title:");
	scanf("%s",title);
	for(int i=0;i<count;i++){
		if(strcmp(book[i].bookname,title)==0){
			printf("+++++++++++++++++++++++++++\n");
			printf("BOOK TITLE:%s\n",book[i].bookname);
			printf("+++++++++++++++++++++++++++\n");
		}
	}
	//printf("Book not available\n");
}

void totalbook(){
	int booktotal=0;
	for(int i=0;i<count;i++){
		booktotal =booktotal+book[i].bookcount;
	}
	printf("Total books available:%d\n",booktotal);
}

void issuebook(){
	char issue[40];
	printf("Enter the book you want:\n");
	scanf("%s",issue);

	for(int i=0;i<count;i++){
		if(strcmp(book[i].bookname,issue)==0){
			book[i].bookcount--;
		}
	}
}
int main(){
	int choice;

	while(1){
		printf("1.Display book information\n2.Add a book\n3.Display all the book in library of a particular author\n4.Display the number of books of a particular title\n5.Display the total number of books in the library\n6.Issue a book\n7.exit\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);

		switch(choice){
			case 1:
				Display();
				break;
			case 2:
				addbook();
				break;
			case 3:
				displayauthorbook();
				break;
			case 4:
				displaytitle();
				break;
			case 5:
				totalbook();
				break;
			case 6:
				issuebook();
				break;
			case 7:
				exit(0);
			default:
				printf("Enter the valid choice\n");
		}
	}
}