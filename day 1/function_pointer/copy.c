#include <stdio.h>

void copy(char str[],char cpy[]){
	int i;
	for(i=0;str[i]!='\0';i++){
		cpy[i] = str[i];
}
	cpy[i]='\0';
	printf("%s",cpy);
}

int main(){
	char str[40];
	char cpy[40];
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	void (*copypoint)(char [],char[]) =copy;
	copypoint(str,cpy);	
	//printf("%s\n",cpy);
	return  0;
}
