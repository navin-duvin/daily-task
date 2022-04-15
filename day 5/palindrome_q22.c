//22. Write a program to check whether the entered string is palindrome or not.

#include <stdio.h>

int main(){
	char str[20];
	int i;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	int len=strlen(str);
	int check=0;
	for(i=0;str[i]!='\0';i++){
		if(str[i] == str[len-i-1]){
			check=1;
			break;
		}
	}
	if(check==1){
		printf("\n%s is palindrome",str);
	}else{
		printf("\n%s is not palindrome",str);
	}
	
	return 0;
}
