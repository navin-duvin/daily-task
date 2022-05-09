#include <stdio.h>
#include <stdlib.h>

struct stock{
	int productid;
	char productname[20];
	int quantity;
	float price;
}product[]={
	1,"apple",10,100,
	2,"mango",10,150,
	3,"guava",13,100,
	4,"pineapple",3,120,
	5,"watermelon",4,200
};

int productcount=5;

/*void addproduct(){
	int count=101;
	for(int i=0;i<productcount;i++){
		product[i].productid=count;
		printf("Enter the product name:\n");
		scanf("%s",product[i].productname);
		printf("Enter the quantity:\n");
		scanf("%d",&product[i].quantity);
		printf("Enter the product price:\n");
		scanf("%f",&product[i].price);
		count++;
	}
}*/
void display(){
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

		printf("ITEMS IN STOCK\n");
		printf("Productid\tProduct name\tProduct quantity\tProduct price\n");
		for(int i=0;i<productcount;i++){
			printf("%d\t\t%s\t\t%d\t\t\t%f\n",product[i].productid,product[i].productname,product[i].quantity,product[i].price);
		}
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}
void checkstock(){
		for(int i=0;i<productcount;i++){
			if(product[i].quantity<=5){
				printf("Product Name:%s quantity is %d:Add items to stock\n",product[i].productname,product[i].quantity);
			}
		}
}

int main(){
	int choice;

	while(1){
		printf("1.add product to stock\n2.display product in the stock\n3.check product in the stock\n4.exit\n");
		printf("Enter the choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				//addproduct();
				break;
			case 2:
				display();
				break;
			case 3:
				checkstock();
				break;
			case 4:
				exit(0);
			default:
				printf("Enter the valid choice\n");

		}
	}
	return 0;
}