using namespace std;
#include <iostream>
#include <iomanip>

struct stock{
	int productid;
	char productname[20];
	int quantity;
	float unitprice;
	float soldprice;
}product[]={
	1,"apple",10,100,0,
	2,"mango",12,150,0,
	3,"guava",13,100,0,
	4,"pineapple",5,120,0,
	5,"watermelon",4,200,0
};

int productcount=5;

int totalsold=0;
float bookcost=0;

/*void addproduct(){
	int count=100;
	for(int i=0;i<productcount;i++){
		product[i].productid=count;
		cout<<"Enter the product name:\n";
		cin>>product[i].productname;
		cout<<"Enter the quantity:\n";
		cin>>product[i].quantity;
		cout<<"Enter the product unitprice:\n";
		cin>>product[i].unitprice;
		++count;
	}
}*/
void display(){
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<"\n";
		cout<<"display stock:\n";
		cout<<"Productid"<<"\t"<<"Product name"<<"\t"<<"Product quantity"<<"\t"<<"Product unitprice"<<"\t"<<"product soldprice"<<"\t"<<endl;
		for(int i=0;i<productcount;i++){
			//cout<<product[i].productid<<"\t\t"<<product[i].productname<<"\t\t"<<product[i].quantity<<"\t\t"<<product[i].unitprice<<endl;
			cout<<product[i].productid<<setw(20)<<product[i].productname<<setw(20)<<product[i].quantity<<setw(20)<<product[i].unitprice<<setw(20)<<product[i].soldprice<<endl;	
		}
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<"\n";
}
void checkstock(){
		for(int i=0;i<productcount;i++){
			if(product[i].quantity<=5){
				cout<<"Product Name:"<<product[i].productname<<" quantity is "<<product[i].quantity<<" "<<"Add items to stock\n";
			}
		}
		
}
void solddetails(){
		cout<<"=========================================\n";
		cout<<"TOTAL PRODUCT SOLD: "<<totalsold<<endl;
		cout<<"TOTAL PRICE: "<<bookcost<<endl;
		cout<<"=========================================\n";
}	
void purchase(){
		int copy;
		cout<<"Enter the product id to purchase the product:\n";
		int pid;
		cin>>pid;

		for(int i=0;i<productcount;i++){
			if(product[i].productid ==pid){
				cout<<"Enter the quantity you want to purchase:\n";
				cin>>copy;
				product[i].quantity -= copy;
				totalsold += copy;
				bookcost +=(copy *product[i].unitprice); 
				product[i].soldprice += (copy *product[i].unitprice);
			}
		}
}
int main(){
	int choice;

	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"+                                     WELCOME                                          +\n";
	cout<<"+                           STOCK CHECKER APPLICATION                                  +\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	while(1){
		cout<<"1.add product"<<endl<<"2.display stock"<<endl<<"3.check stock"<<endl<<"4.purchase"<<endl<<"5.solddetails"<<endl<<"6.exit"<<endl;
		cout<<"Enter the choice:\n";
		cin>>choice;
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
				purchase();
				break;
			case 5:
				solddetails();
				break;
			case 6:
				exit(0);
			default:
				cout<<"Enter the valid choice\n";

		}
	}
}