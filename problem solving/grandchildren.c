//find grandchild left string is child and right string is father
#include <stdio.h>

int main(){
	char str[][]={
		{"luke","shaw"},
		{"wayne","rooney"},
		{"rooney","ronaldo"},
		{"shaw","rooney"}
	};

	str[0][0]="luke";
	str[0][1]="shaw";//father
	str[1][0]="wayne";
	str[1][1]="rooney";//father
	str[2][0]="rooney";
	str[2][2]="ronaldo";//father
	str[3][0]="shaw";
	str[3][1]="rooney";//father

	char find[]="rooney";

	for(int i=0;i<4;i++){
		
	}
	return 0;
}