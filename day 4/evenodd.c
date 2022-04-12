//To read numbers from a file and write even, odd numbers to separate files.

#include <stdio.h>

int main(){
    FILE *fp,*ep,*op;
    fp=fopen("file.txt","r");
    ep=fopen("even.txt","w");
    op=fopen("odd.txt","w");
    
    if(fp==NULL && ep==NULL && op==NULL){
        printf("file not found");
    }
    char ch;
    while((ch=fgetc(fp))!=EOF){
        if(ch%2==0){
            fprintf(ep,"%c",ch);
        }else{
            fprintf(op,"%c",ch);
        }
    }
    fclose(fp);
    fclose(op);
    fclose(ep);
    return 0;
}
