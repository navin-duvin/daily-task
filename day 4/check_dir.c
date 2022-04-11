//C program to check whether a file or directory exists or not

#include <stdio.h>

int main(){
	FILE *fp;
	printf("Enter the file name you want to check:\n");
	char dir[100];
	scanf("%s",dir);
	fp=fopen(dir,"r");
	
	if(fp==NULL){
		printf("file not found");
	}
	else{
		printf("File is exist");
	}
	fclose(fp);
	
	return 0;
}
