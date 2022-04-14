// replace a specific line from a file 

#include <stdio.h>

int main(){
	FILE *fp,*cp;

	fp=fopen("file.txt","r");
	cp=fopen("replaceline.txt","w");

	if(fp==NULL || cp==NULL){
		printf("File not found");
	}
	char copy[1000];
	int replaceline=0;
	printf("Enter the line number to replaceline:");
	scanf("%d",&replaceline);

	char replace[2000];
	printf("Enter the content to replace:");
	scanf("%s",replace);

	int fileline=1;
	int currentline=1;
	do{
		fgets(copy, 1000, fp);
    if (feof(fp)){
    	fileline = 0;
    }else if(currentline==replaceline){
    	fputs(replace,cp)
    }else{
    	fputs(copy,cp);
    }
    currentline++;
	}while(fileline);

	fclose(fp);
	fclose(cp);
	return 0;

}