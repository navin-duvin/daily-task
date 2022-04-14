#include<stdio.h>
void concat(char *str1,char *str2){
	int i=0,j=0,k=0,count=0;
	for(i=0;str1[i]!='\0';i++){
	}
	for(j=i,k=0;str2[k]!='\0';k++,j++){
		str1[j]=str2[k];
	}
	str1[j]='\0';
	printf("%s",str1);
}
void display(char *str1,char *str2,void (*ptr)(char *,char *)){
	ptr(str1,str2);
}
int main(){
	char str1[5]="zoho";
	char str2[5]="corp";
	void (*ptr)(char *,char *)=concat;
	display(str1,str2,ptr);
}
