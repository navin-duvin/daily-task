//27.  Write a C Program to count number of characters in a file


#include <stdio.h>

int main(){
	FILE *fp;
	fp=fopen("file.txt","r");
	if(fp==NULL){
		printf("File not found");
	}

	char ch;
	int count=0;
	while((ch=fgetc(fp))!=EOF){
			printf("%c",ch);
			count++;
	}
	printf("Number of characters in a file:%d\n",count-1);
	fclose(fp);
	return 0;
}