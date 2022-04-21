#include <stdio.h>

int length(char str[]){
	int l=0;
	for(int i=0;str[i]!='\0';i++){
		l++;		
}
	return l-1;
}
int main(){
	int len=0;
	char str[40];
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	int (*lengthpoint)(char []) = length;
	len=lengthpoint(str);
	printf("%d\n",len);
	return 0;	
}
