#include <stdio.h>

int main(){
	FILE *fp;
	fp=fopen("C:\\Users\\Administrator\\Desktop\\zoho incubation\\day 4\\file.txt","a");
	
	if(fp==NULL){
		printf("file not found");
	}
	
	//while(!feof(fp)){
		fprintf(fp,"content appended");
	//}
	fclose(fp);
	
	return 0;
}
