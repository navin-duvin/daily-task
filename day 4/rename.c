#include <stdio.h>

int main(){
	FILE *fp,*rn;
	int set;
	char str[100];
	fp=fopen("rename.txt","r");
	rn=fopen("renamingfile.tmp","w");
	
	set = rename("renamingfile.tmp","rename.txt");
	if(set==0){
		puts("File renamed");
	}
	else{
		puts("unable to rename");
	}
	fclose(fp);
	fclose(rn);
	return 0;
}
