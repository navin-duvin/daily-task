//29.  C program to compare data of two files in File Handling


#include <stdio.h>

int main(){
    FILE *fp,*cp;
    fp=fopen("compare.txt","r");
    cp =fopen("compare1.txt","r");
    
    if(fp==NULL && cp==NULL){
        printf("file not found");
    }
    char c,ch;
    int count=0,charcount=0;
    while(!feof(fp) && !feof(cp)){
        ch=fgetc(fp);
        c= fgetc(cp);
        if(ch==c){
            charcount++;
        }
        count++;
    }
    printf("charcount:%d\n",charcount);
    printf("count:%d\n",count);
    if(charcount==count){
        printf("file content are equal.\n");
    }else{
        printf("File content are not equal.\n");
    }
    fclose(fp);
    fclose(cp);
    return 0;
}