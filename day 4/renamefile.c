#include <stdio.h>

int main(){
    FILE *fp,*rn;
    fp=fopen("rename.txt","r");
    rn=fopen("file.txt","w");
    
    if(fp==NULL && rn==NULL){
        printf("file not found");
    }
    
    char ch;
    while((ch=fgetc(fp))!=EOF){
       // ch =fgetc(fp);
        //printf("%c",fp);
        fprintf(rn,"%c",ch);
    }
    
    rename("file.txt","filerenamed.txt");
    remove("file.txt");
    fclose(fp);
    
    return 0;
}
