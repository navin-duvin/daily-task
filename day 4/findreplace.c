//Program to find and replace a word in a text file.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	FILE *fp,*cp;

	fp=fopen("file.txt","r");
	cp=fopen("findreplace.txt","w");

	if(fp==NULL || cp==NULL){
		printf("file not found");
	}

	char find[100];
	char replace[100];
	char copy[1000];
	char ch;
	while((ch=fgetc(fp))!=EOF){
		printf("%d",ch);
	}
	printf("\n");
	printf("Enter the word in the file to replace:");
	scanf("%s",find);

	printf("Enter the word to replace:");
	scanf("%s",replace);

	int findline=1;

	do{
		fgets(copy,1000,fp);

		if(feof){
			findline=0;
		}else if(copy==find){
			strcpy(copy,replace);
			fputs(copy,cp);
		}else{
			fputs(copy,cp);
		}

	}while(findline);

	fclose(fp);
	fclose(cp);
	return 0;
}