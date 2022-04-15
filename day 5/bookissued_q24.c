//24.Create a structure containing book information like accession number, 
//name of author, book title and flag to know whether a book is issued or not.

#include <stdio.h>


struct book{
	int acc_no;
	char booktitle[50];
	char author[30];
	int flag;
}b[40]={
	1, "C", "Dennis Ritchie", 1,
	2, "Java", "james gosling", 1,
	3, "python", "guido van", 1,
	4, "javascript", "Brendan Eich", 0,
	5, "C++", "Bjarne Stroustrup", 0
};

int main(){
	int num,i;
	printf("Enter the  number of books you want to see:");
	scanf("%d",&num);
	printf("Available books in library\n");
	for(i=0;i<num;i++){
	//	printf("+++++++++++++++++++\n");
		printf("Accession Number:%d\nBooktitle:%s\nAuthor Name:%s\nIssued:%d\n",b[i].acc_no,b[i].booktitle,b[i].author,b[i].flag);	
		printf("+++++++++++++++++++\n");
	}
}
