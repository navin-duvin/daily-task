#include <stdio.h>

struct product{
	char name[10];
	char made[10];
	int price;	
}p[100];

int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	printf("Enter the name of product:");
	scanf("%s",p[i].name);
	printf("Enter the made country:");
	scanf("%s",p[i].made);
	printf("Enter the product price:");
	scanf("%d",&p[i].price);

	}
	printf("\n");
	printf("Display information:\n");
	for(int i=0;i<n;i++){
		printf("product name:%s\nProduct made:%s\nProduct price:%d\n",p[i].name,p[i].made,p[i].price);
	}
	return 0;
}
