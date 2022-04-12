//Program to copy the data and add '3' to data at even location and display them.

#include <stdio.h>

int main(){
    FILE *cp,*fp;
    int count=0;
    fp=fopen("file.txt","r");
    cp=fopen("copied.txt","w");
    
    if(fp==NULL){
        printf("file not found");
    }
    char ch;
    while((ch=fgetc(fp))!=EOF){
        if((count%2==0) && (!count==0)){
            char c='3';
            ch=c;
            fprintf(cp,"%c",ch);
        }else{
            fprintf(cp,"%c",ch);
        }
    count++;
    }
    
    fclose(fp);
    fclose(cp);
    return 0;
}
