#include <stdio.h>

int len=0;
void length(){
	char str;
	scanf("%c",&str);
	len++;
	if(str !='\n'){
		length();
		printf("%c",str);
	}
}
int main(){
	printf("Enter the string:");
	length();
	printf("\nLength:%d",len-1);
	return 0;

}
