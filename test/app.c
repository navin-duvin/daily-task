
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stock{
	char author[40];
	char title[50];
	float price;
	char publisher[30];
	int copies;
	int sold;
	float soldprice;
}books,book[20]={
	"Dennis","C", 210,"publih1", 20,0,0,
	"James","Java",200,"publish2",20,0,0,
	"guido","python",100,"publish3",20,0,0
};

int totalsold=0;
float bookcost=0;

int count=2;
int totalprice;

void searchbook(){
	FILE *in;
	in=fopen("stock.txt","r");
	if(in==NULL){
		printf("Error opening the file:\n");
	}
	while(fscanf(in,"%s %s %f %s %d %d %f",books.author,books.title,&books.price,books.publisher,&books.copies,&books.sold,&books.soldprice)!=EOF){
		printf("%s %s %f %s %d %d %f\n",books.author,books.title,books.price,books.publisher,books.copies,books.sold,books.soldprice);
	}
	int flag=0;
	while(fscanf(in,"%s %s %f %s %d %d %f",books.author,books.title,&books.price,books.publisher,&books.copies,&books.sold,&books.soldprice)!=EOF){
		if(((strcmp(books.title,"C"))==0) && ((strcmp(books.author,"Denns"))==0)){
			printf("book found\n");
			flag=1;
		}
	}
	if(flag==0){
		printf("book not found:\n");	
	}
	//fprintf()
	fclose(in);
}

void requestbook(){
		int booksold=0;
		float totalprice;
		FILE *pp;
		pp=fopen("purchasedetails","w");
		if(pp==NULL){
			printf("Error opening the file:\n");
		}
		printf("Please check available stock to requestbook:\n");
		int copy;
		char tit[20];
		printf("Enter the book title:\n");
		scanf("%s",tit);
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		for(int i=0;i<=count;i++){
			if((strcmp(book[i].title,tit))==0){
				printf("Enter the copies of book you want:\n");
				scanf("%d",&copy);
                
				if(copy<=book[i].copies){
					printf("copies available at stock:%d\n",i);
					
					printf("Purchase Information:\n");
					book[i].copies= book[i].copies-copy;
					booksold +=copy;
					book[i].sold=copy;
					totalsold +=booksold;
					totalprice = book[i].price*copy;
					bookcost +=totalprice;
					book[i].soldprice=totalprice;
					printf("Booksold:%d\tTotalcost:%f\n",booksold,totalprice);
					//fwrite(book,sizeof(struct stock),2,pp);
					printf("Author:%s\ttitle:%s\tPrice:%f\tpublisher:%s\tCopies:%d\tSold:%d\n",book[i].author,book[i].title,book[i].price,book[i].publisher,book[i].copies,book[i].sold);
			    }else{
			    	printf("These many copies not available in stock:%d\n",i);
			    }
			}
			
		}
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		fclose(pp);
}

void display(){	
	for(int i=0;i<=count;i++){
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("Available books at stock:%d\n",i);
		printf("Author:%s\ttitle:%s\tPrice:%f\tpublisher:%s\tCopies:%d\tSold:%d\tSoldprice:%f\n",book[i].author,book[i].title,book[i].price,book[i].publisher,book[i].copies,book[i].sold,book[i].soldprice);
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	}
	printf("============================================================================================\n");
	printf("Total books sold:%d\n",totalsold);
	printf("Total sold book cost:%f\n",bookcost);
	printf("============================================================================================\n");
}

void createaccount(){
	printf("Enter the salesperson password:");
	scanf("%s",s.password);
}
void updateprice(){
	char pass[20];
	printf("Enter the sales person password:");
	scanf("%s",pass);
	char t[20];
	if((strcmp(pass,s.password))==0){
		//fread(book,sizeof(struct stock),2,rp);
			printf("Enter the book title:\n");
			scanf("%s",t);
			printf("Enter the price to change:\n");
			float change;
			scanf("%f",&change);
		for(int i=0;i<=count;i++){
			if((strcmp(book[i].title,t))==0){
				book[i].price = change;
			}
			//printf("Author:%s\ttitle:%s\tPrice:%f\tpublisher:%s\tCopies:%d\t\n",book[i].author,book[i].title,book[i].price,book[i].publisher,book[i].copies);
		}
	}
}

int main(){
		
	//readfile();
	//append();

	int choice;
	printf("===================================================================\n");
	printf("                           Welcome                                 \n");
	printf("           BOOKSHOP MAINTAINEANCE INVENTORY SYSTEM                 \n");
	printf("===================================================================\n");

	

	while(1){
		printf("Enter the choice:\n");
		printf("1.customer search for book\n2.purchase book\n3.updateprice\n4.display\n5.exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				searchbook();
				break;
			case 2:
				requestbook();
				break;
			case 3:
				updateprice();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("Enter the valid choice\n");
		}
	}

	//fclose(fp);
	return 0;
}