// 21. Write a c program to perform string manipulation by Using library function
#include <stdio.h>
#include <string.h>

int main(){
	char str[30],copy[30],cmp[20];
	int len;
	printf("Enter the string:\n");
	fgets(str,sizeof(str),stdin);
	
	len=strlen(str);
	printf("Length of the string:%d\n",len-1);
	
	strcpy(copy,str);
	printf("copied string using strcpy:%s\n",copy);
	
	printf("Enter the string to compare:");
	fgets(cmp,sizeof(cmp),stdin);
	
	int check=strcmp(str,cmp);
	if(check==0){
		printf("String are equal\n");
	}else{
		printf("String are not equal\n");
	}
	return 0;
}
