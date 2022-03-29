#include <stdio.h>

typedef enum employee{
	Level1,
	Level2,
	Level3,
	Level4
}employee;


int main(){
	employee e;
	e =  Level1;
	printf("%d",e);
}

