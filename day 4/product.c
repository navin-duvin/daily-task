//Program to write 10 Product details to a file.
//write them into separate files based on the type (packed, fresh) of the product.
//Note: PNo, PName, Type, Quantity, CostperUnit as  fields of a Product structure.

#include <stdio.h>

struct Product{
    int PNo;
    char PName[20];
    char type[20];
    int Quantity;
    float cost;
};

    struct Product p[10];
   /* 
     p[0] ={1,"tomato","vegetable",1,50};
     p[1] ={2,"banana","fruit",1,10};
     p[2] ={3,"onion","vegetable",1,40};
     p[3] ={4,"papaya","fruit",1,60};
     p[4] ={5,"mango","fruit",1,80};
     p[5] ={6,"carrot","vegetable",1,100};
     p[6] ={7,"apple","fruit",1,150};
     p[7] ={8,"beetroot","vegetable",1,20};
     p[8] ={9,"watermelon","fruit",1,200};
     p[9] ={10,"ladiesfinger","vegetable",1,60};
    */
    printf("Enter the product details:");
    for(int i=0;i<=10;i++){
        printf("Enter productid:");
        scanf("%d",&p[i].PNo);
        printf("Enter the Product name:");
        scanf("%s",p[i].PName);
        printf("Enter the product type:");
        scanf("%s",p[i].type);
        printf("Enter the Quantity:");
        scanf("%d",&p[i].Quantity);
        printf("Enter the product cost:");
        scanf("%f",&p[i].cost);
    }
    
int main(){
    FILE *fp,*np;
    fp=fopen("fruit.txt","w");
    np=fopen("vegetable.txt","w");
    if(fp==NULL&& np==NULL){
        printf("file not found");
    }
    for(int i=0;i<10;i++){
        if(p[i].type=="packed"){
            fwrite(&p[i],sizeof(struct Product),1,fp);
        }else{
            fwrite(&p[i],sizeof(struct Product),1,np);
        }
    }
        
    fclose(fp);
    fclose(np);
    return 0;
}
