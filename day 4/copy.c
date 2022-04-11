//To copy a file.

#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	FILE *cp;
	fp=fopen("file.txt","r");
	cp=fopen("copy.txt","w");
	
	if(fp==NULL && cp==NULL){
		printf("file not found");
		exit(0);
	}
	char ch;
	while((ch=fgetc(fp))!=EOF){
	//	ch= fgetc(fp);
		fprintf(cp,"%c",ch);
		//fputc(ch,cp);
	}
	
	fclose(fp);
	fclose(cp);
	
	return 0;
}
