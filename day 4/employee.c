//To create an Employee detail using structure and update the same in a file using fscanf() and fprintf() functions.

#include <stdio.h>

struct emp{
  int id;
  char name[20];
  int salary;
  
};

struct emp e ={123,"navin",10000};

int main(){
    FILE *fp;
    fp=fopen("file.txt","w");
    if(fp==NULL){
        printf("File not found");
    }
    //fwrite(&e,sizeof(struct emp),1,fp);
    fscanf(fp,"%d%s%d",&e.id,e.name,&e.salary);
    fprintf(fp,"%d%s%d",e.id,e.name,e.salary);
    fclose(fp);
    
    fp=fopen("file.txt","r");
    char ch;
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }
    fclose(fp);
    
    return 0;
}
