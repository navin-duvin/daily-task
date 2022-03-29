#include <stdio.h>

void concat(char str[],char con[]){
	int len= 0,j;
  	while(str[len]!='\0') {
    		++len;
  	}
	for (j=0;con[j]!='\0';++j,++len) {
    		str[len]=con[j];
  	}
	str[len]='\0';
	printf("concatenated string: ");
  	printf("%s\n",str);

}

int main(){
	char str[40],con[40];
	printf("Enter the string:");
	scanf("%s",str);
	printf("Enter the string to concat:");
	scanf("%s",con);
	void (*concatpoint)(char [],char[])=concat;
	concatpoint(str,con);
	return 0;
}
