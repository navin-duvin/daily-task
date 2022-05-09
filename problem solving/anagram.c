//program to check anagram

#include <stdio.h>
#include <string.h>

int main(){
	char str[]="taeh";
	char ana[]="hate";
    
    if(strlen(str)!=strlen(ana)){
        printf("not anagram");
        return 0;
    }
	for(int i=0;str[i]!='\0';i++){
		for(int j=0;ana[j]!='\0';j++){
			if(str[i]==ana[j]){
				ana[j]='0';
			}else{
			    ana[j]=ana[j];
			}
		}
	}
	printf("%s\n",ana);
	int flag=0;
    for(int i=0;ana[i]!='\0';i++){
        if(ana[i]!='0'){
            //printf("not Anargram\n");
            flag=1;
        }
    }
    
    if(flag==1){
        printf("not Anargram");
    }else{
        printf("anagram");
    }
	return 0;
}