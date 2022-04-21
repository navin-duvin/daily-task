#include <stdio.h>

int natural(int num){
	if(num != 0){
		return num + natural(num-1);
	}
	else{
		return num;
	}
}

int main(){
     int  num;
     printf("Enter the number:");
     scanf("%d",&num);
     printf("sum of natural numbers:%d\n",natural(num));
     return 0;

}
