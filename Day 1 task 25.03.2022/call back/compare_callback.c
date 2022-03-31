#include<stdio.h>
void concat(char *str1,char *str2){
	int i=0,j=0,k=0,strlen1=0,strlen2=0,count=0;
	for(i=0;str1[i]!='\0';i++){
		strlen1++;
	}
	for(j=0;str2[j]!='\0';j++){
		strlen2++;
	}
	if(strlen1==strlen2){
		for(k=0;k<strlen1;k++){
			if(str1[k]==str2[k]){
				count++;
				continue;
			}
			else{
				break;
			}
		}
		if(count==strlen1){
			printf("Equal");
		}
		else{
			printf("Not equal");
		}
	}
}
void display(char *str1,char *str2,void (*ptr)(char *,char *)){
	ptr(str1,str2);
}
int main(){
	char str1[5]="zoho";
	char str2[5]="zoha";
	void (*ptr)(char *,char *)=concat;
	display(str1,str2,ptr);
}
