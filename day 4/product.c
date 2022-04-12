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
}p[10];

int main(){
    // struct Product p[10];
     
     /*p[0] = {1,"tomato","packed",1,50};
     p[1] = {2,"banana","fresh",1,10};
     p[2] = {3,"onion","packed",1,40};
     p[3] = {4,"papaya","fresh",1,60};
     p[4] = {5,"mango","fresh",1,80};
     p[5] = {6,"carrot","packed",1,100};
     p[6] = {7,"apple","fresh",1,150};
     p[7] = {8,"beetroot","packed",1,20};
     p[8] = {9,"watermelon","fresh",1,200};
     p[9] = {10,"ladiesfinger","packed",1,60};
      */
    
    printf("Enter the product details\n");
    for(int i=0;i<10;i++){
        printf("Enter productid:\n");
        scanf("%d",&p[i].PNo);
        printf("Enter the Product name:\n");
        scanf("%s",p[i].PName);
        printf("Enter the product type:\n");
        scanf("%s",p[i].type);
        printf("Enter the Quantity:\n");
        scanf("%d",&p[i].Quantity);
        printf("Enter the product cost:\n");
        scanf("%f",&p[i].cost);
    }
    
    FILE *fp,*np;
    fp=fopen("fresh.txt","wb+");
    np=fopen("packed.txt","wb+");
    
    if(fp==NULL&& np==NULL){
        printf("file not found");
    }
    
    char str[]="packed";
    for(int i=0;i<10;i++){
        if(!strcmp(p[i].type,str)){
            fwrite(&p[i],sizeof(struct Product),1,fp);
        }else{
            fwrite(&p[i],sizeof(struct Product),1,np);
        }
    }
        
    fclose(fp);
    fclose(np);
    return 0;
}
