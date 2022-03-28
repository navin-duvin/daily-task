#include <stdio.h>

void compare(char str[],char cmp[])
{    	int len1=0,len2=0;
	for(int i=0;str[i]!='\0';i++){
		len1++;	
	}
	for(int i=0;cmp[i]!='\0';i++){
		len2++;
	}
    int flag=0,i=0;
    while(str[i]!='\0' &&cmp[i]!='\0')
    {
       if(str[i]!=cmp[i])
       {
           flag=1;
           break;
       }
       i++;
    }
    if(flag==0){
	    printf("Strings are same");}
    else if(len1!=len2){
    	printf("Strings are not same");}
    else{
	printf("Strings are not same");}
}
int main(){
	int res;
	char str[40];
	char cmp[40];
	printf("Enter the first string:");
	scanf("%s",str);
	printf("Enter the second string:");
	scanf("%s",cmp);
	int (*comparepoint)(char[],char[])=compare;
	comparepoint(str,cmp);
	return 0;
}
