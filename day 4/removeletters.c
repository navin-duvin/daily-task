//Program to remove duplicate letters in a file.

#include <stdio.h>
int  main(){
	FILE *fp,*cp;
	fp=fopen("duplicate.txt","r");
    cp=fopen("newduplicate.txt","w");						
	if(fp==NULL){
		printf("file not found");
	}
	char ch;
	char str[128] ={0};
	while((ch=fgetc(fp))!=EOF){
	    if (str[ch] == 0) {
			fputc(ch,cp);
			str[ch]++;
		}
		
	    if(ch==' '){
	        char sp=' ';
	        fprintf(cp,"%c",sp);
	    }
	}
	fclose(fp);
	fclose(cp);
	return 0;
}
