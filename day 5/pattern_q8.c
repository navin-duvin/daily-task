/*8. Write a program to following pattern    
                             1
                           2  3
                         4  5   6
                      7  8   9  10

*/

#include <stdio.h>

int main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	int print=1;
	int row,col;
	for(row=1;row<num;row++){
		for(col=row;col<num;col++){
			if(row+col==1 && row+col==num){
				printf(" ");
			}
			else{
				printf("%d",print++);
			}
		}
		printf("\n");
	}
	return 0;
}
